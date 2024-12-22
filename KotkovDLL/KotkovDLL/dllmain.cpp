// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"

#include <string>
#include <fstream>
#include <iostream>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
//#include <boost/archive/binary_iarchive.hpp>
//#include <boost/archive/binary_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/export.hpp>


#pragma warning(disable : 4996)


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
struct AnimalCpp {
    char Name[100];
    int Month_of_birth;
    int Year_of_birth;
    double Weight;
    bool Predator;
    bool Can_fly;
    bool Bird;
};

class Animal_kotkov {
public:
    virtual ~Animal_kotkov() {};
	std::string Name = "None";
	int Month_of_birth = 0;
	int Year_of_birth = 0;
	double Weight = 0;
	bool Predator = 0;

    virtual void Animal_to_struct(AnimalCpp& item) {
        strcpy(item.Name, Name.c_str());
        item.Month_of_birth = Month_of_birth;
        item.Year_of_birth = Year_of_birth;
        item.Weight = Weight;
        item.Predator = Predator;
        item.Can_fly = false;
        item.Bird = false;
    }

private:
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& Name;
		ar& Month_of_birth;
		ar& Year_of_birth;
		ar& Weight;
		ar& Predator;
	}
};

class Bird : public Animal_kotkov {
public:
	bool Can_fly = 0;
    virtual ~Bird() {}
    void Animal_to_struct(AnimalCpp& item) override {
        Animal_kotkov::Animal_to_struct(item);
        item.Can_fly = Can_fly;
        item.Bird = true;
    }
private:
	friend class boost::serialization::access;
	template <typename Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& boost::serialization::base_object<Animal_kotkov>(*this);
		ar& Can_fly;
	}
};


class Zoo_kotkov {
public:
	std::vector<std::shared_ptr<Animal_kotkov>> _animals;
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& _animals;
	}
};


BOOST_CLASS_EXPORT(Animal_kotkov)
BOOST_CLASS_EXPORT(Bird)
BOOST_CLASS_EXPORT(Zoo_kotkov)

extern "C" {
    __declspec(dllexport) void LoadData(Zoo_kotkov* zoo, char* filename) {
        try {
            std::ifstream stream(filename);
            if (!stream.is_open()) {
                throw std::runtime_error("File open error.");
            }

            boost::archive::text_iarchive ar(stream);
            ar& *zoo;
        }
        catch (const std::exception& e) {
            auto s = e.what();
            std::cerr << "Error: " << s << std::endl;
        }
    }

    __declspec(dllexport) int GetSizeZoo(Zoo_kotkov* zoo) {
        return (int)zoo->_animals.size();
    }

    __declspec(dllexport) void GetStruct(Zoo_kotkov* zoo, AnimalCpp& animal, int index) {
        zoo->_animals[index]->Animal_to_struct(animal);
    }

    __declspec(dllexport) void SaveData(Zoo_kotkov* zoo, char* filename) {
        std::ofstream stream(filename);
        boost::archive::text_oarchive ar(stream);
        ar& *zoo;
    }

    __declspec(dllexport) void StructToZoo(Zoo_kotkov* zoo, AnimalCpp& animal) {
        if (animal.Bird) {
            std::shared_ptr<Bird> bird = std::make_shared<Bird>();
            bird->Name = animal.Name;
            bird->Month_of_birth = animal.Month_of_birth;
            bird->Year_of_birth = animal.Year_of_birth;
            bird->Weight = animal.Weight;
            bird->Predator = animal.Predator;
            bird->Can_fly = animal.Can_fly;

            zoo->_animals.push_back(bird);
        }
        else {
            std::shared_ptr<Animal_kotkov> animal_ptr = std::make_shared<Animal_kotkov>();
            animal_ptr->Name = animal.Name;
            animal_ptr->Month_of_birth = animal.Month_of_birth;
            animal_ptr->Year_of_birth = animal.Year_of_birth;
            animal_ptr->Weight = animal.Weight;
            animal_ptr->Predator = animal.Predator;

            zoo->_animals.push_back(animal_ptr);
        }
    }

    __declspec(dllexport) Zoo_kotkov* CreateZoo() {
        return new Zoo_kotkov();
    }

    __declspec(dllexport) void DeleteZoo(Zoo_kotkov* zoo) {
        delete zoo;
    }
}

