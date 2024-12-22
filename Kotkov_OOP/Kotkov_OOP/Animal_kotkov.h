#pragma once
#include <iostream>
#include <string>
#include <boost/serialization/serialization.hpp>

class Animal_kotkov {
public:
	virtual void input_animal();
	virtual void print(std::ostream& stream, bool pretty);

	std::string Name = "None";
	int Month_of_birth = 0;
	int Year_of_birth = 0;
	double Weight = 0;
	bool Predator = 0;
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