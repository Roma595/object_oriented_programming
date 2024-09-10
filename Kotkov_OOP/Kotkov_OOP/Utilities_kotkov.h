#pragma once
#include <iostream>
#include <string>
#include <fstream>

std::string read_string(std::istream& stream);

template <typename Type>
bool validity_enter(std::istream& stream, Type& value, Type low, Type high) {
	Type x;
	stream >> x;
	if (!stream || stream.peek() != '\n' || x < low || x > high) {
		stream.clear();
		stream.ignore(1000, '\n');
		return false;
	}
	value = x;
	return true;
}

template <typename Type>
Type validity_enter_interactive(Type low, Type high) {
	Type x;
	while (!validity_enter(std::cin, x, low, high)) {
		std::cout << "Ошибка, значение должно быть в диапазоне от " << low << " до " << high << std::endl;
	}
	return x;
}

template <typename Type>
void print_value(std::ostream& stream, const Type& value, const std::string& description, bool pretty) {
	if (pretty) {
		stream << description << value << std::endl;
	}
	else {
		stream << value << std::endl;
	}
}


