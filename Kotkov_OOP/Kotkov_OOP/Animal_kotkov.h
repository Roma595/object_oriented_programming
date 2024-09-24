#pragma once
#include <iostream>
#include <string>
#include <boost/serialization/serialization.hpp>

class Animal_kotkov {
public:
	virtual void input_animal();
	virtual void print(std::ostream& stream, bool pretty);
protected:
	std::string _name = "None";
	int _month_of_birth = 0;
	int _year_of_birth = 0;
	double _weight = 0;
	bool _predator = 0;
private:
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& _name;
		ar& _month_of_birth;
		ar& _year_of_birth;
		ar& _weight;
		ar& _predator;
	}
};