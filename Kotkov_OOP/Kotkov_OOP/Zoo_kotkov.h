#pragma once
#include <vector>
#include <fstream>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include "Animal_kotkov.h"

class Zoo_kotkov{
public:

	void add_animal(boost::shared_ptr<Animal_kotkov>);
	void print_data();
	void save_data(std::ostream& stream);
	bool load_data(std::ifstream& stream);
	void delete_data();

	std::vector<boost::shared_ptr<Animal_kotkov>> get_animals();

	~Zoo_kotkov() {
		delete_data();
	}

private:
	std::vector<boost::shared_ptr<Animal_kotkov>> _animals;
};

