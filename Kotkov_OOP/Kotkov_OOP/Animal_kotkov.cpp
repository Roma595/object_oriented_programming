#include <iostream>
#include <fstream>
#include "Animal_kotkov.h"
#include "Utilities_kotkov.h"

void Animal_kotkov::input_animal() {
	std::cout << "Введите имя:" << std::endl;
	Name = read_string(std::cin);

	std::cout << "Введите месяц рождения:" << std::endl;
	Month_of_birth = validity_enter_interactive<int>(1, 12);

	std::cout << "Введите год рождения:" << std::endl;
	Year_of_birth = validity_enter_interactive<int>(1900, 2024);

	std::cout << "Введите вес (кг):" << std::endl;
	Weight = validity_enter_interactive<double>(0.5, 7000.0);

	std::cout << "Это животное хищник? (1 - да, 0 - нет):" << std::endl;
	Predator = validity_enter_interactive<bool>(0, 1);

}

void Animal_kotkov::print(std::ostream& stream, bool pretty) {
	print_value(stream, Name, "Имя:            ", pretty);
	print_value(stream, Month_of_birth, "Месяц рождения: ", pretty);
	print_value(stream, Year_of_birth, "Год рождения:   ", pretty);
	print_value(stream, Weight, "Вес (кг):       ", pretty);
	print_value(stream, Predator, "Хищник (1 - да, 0 - нет): ", pretty);
}
