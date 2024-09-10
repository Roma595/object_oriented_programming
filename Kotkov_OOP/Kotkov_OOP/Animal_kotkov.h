#pragma once
#include <iostream>
#include <string>

class Animal_kotkov {
public:
	void input_animal();
	void print(std::ostream& stream, bool pretty);
	bool import_animal(std::ifstream& stream);

private:
	std::string _name = "None";
	int _month_of_birth = 0;
	int _year_of_birth = 0;
	double _weight = 0;
	bool _predator = 0;
};