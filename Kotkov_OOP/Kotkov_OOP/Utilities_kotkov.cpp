#include <iostream>

#include "Utilities_kotkov.h"

std::string read_string(std::istream& stream) {
	std::string string;
	stream.clear();
	stream >> std::ws;
	std::getline(stream, string);
	return string;
}

