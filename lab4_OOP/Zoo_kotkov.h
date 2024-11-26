#pragma once
#include <vector>
#include <fstream>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/vector.hpp>
#include "Animal_kotkov.h"
#include <QPainter>

class Zoo_kotkov{
public:

	void save_data(std::ostream& stream);
	bool load_data(std::ifstream& stream);
    void draw(QPainter& painter,std::vector<int>& table_size);
    void delete_data();

    const std::vector<std::shared_ptr<Animal_kotkov>> get_animals() const;
    std::vector<std::shared_ptr<Animal_kotkov>>& get_animals_ref();


private:
	std::vector<std::shared_ptr<Animal_kotkov>> _animals;
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar& _animals;
    }
};

