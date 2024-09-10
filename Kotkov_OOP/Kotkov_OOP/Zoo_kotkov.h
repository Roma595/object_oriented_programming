#pragma once
#include <vector>
#include <fstream>
#include "Animal_kotkov.h"

class Zoo_kotkov{
public:
	void add_animal(Animal_kotkov* animal);
	void print_data(std::ostream& stream, bool pretty);
	bool load_data(std::ifstream& stream);
	void delete_data();

	std::vector<Animal_kotkov*> get_animals();
	~Zoo_kotkov() {
		delete_data();
	}

private:
	std::vector<Animal_kotkov*> _animals;
};

