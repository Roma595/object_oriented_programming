#include <iostream>
#include <fstream>
#include "Animal_kotkov.h"
#include "Utilities_kotkov.h"

void Animal_kotkov::input_animal() {
	std::cout << "Введите имя:" << std::endl;
	_name = read_string(std::cin);

	std::cout << "Введите месяц рождения:" << std::endl;
	_month_of_birth = validity_enter_interactive<int>(1, 12);

	std::cout << "Введите год рождения:" << std::endl;
	_year_of_birth = validity_enter_interactive<int>(1900, 2024);

	std::cout << "Введите вес (кг):" << std::endl;
	_weight = validity_enter_interactive<double>(0.5, 7000.0);

	std::cout << "Это животное хищник? (1 - да, 0 - нет):" << std::endl;
	_predator = validity_enter_interactive<bool>(0, 1);

}

void Animal_kotkov::print(std::ostream& stream, bool pretty) {
	print_value(stream, _name, "Имя:            ", pretty);
	print_value(stream, _month_of_birth, "Месяц рождения: ", pretty);
	print_value(stream, _year_of_birth, "Год рождения:   ", pretty);
	print_value(stream, _weight, "Вес (кг):       ", pretty);
	print_value(stream, _predator, "Хищник (1 - да, 0 - нет): ", pretty);
}

bool Animal_kotkov::import_animal(std::ifstream& stream) {
	_name = read_string(stream);
	if (validity_enter<int>(stream, _month_of_birth, 1, 12) && validity_enter<int>(stream, _year_of_birth, 1900, 2024) && validity_enter<double>(stream, _weight, 0.5, 7000.0) && validity_enter<bool>(stream, _predator, 0, 1) ) {
		return true;
	}
	std::cout << "Ошибка: файл некорректный." << std::endl;
	return false;
	
}