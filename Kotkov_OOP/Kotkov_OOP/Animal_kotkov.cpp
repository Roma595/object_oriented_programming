#include <iostream>
#include <fstream>
#include "Animal_kotkov.h"
#include "Utilities_kotkov.h"

void Animal_kotkov::input_animal() {
	std::cout << "������� ���:" << std::endl;
	_name = read_string(std::cin);

	std::cout << "������� ����� ��������:" << std::endl;
	_month_of_birth = validity_enter_interactive<int>(1, 12);

	std::cout << "������� ��� ��������:" << std::endl;
	_year_of_birth = validity_enter_interactive<int>(1900, 2024);

	std::cout << "������� ��� (��):" << std::endl;
	_weight = validity_enter_interactive<double>(0.5, 7000.0);

	std::cout << "��� �������� ������? (1 - ��, 0 - ���):" << std::endl;
	_predator = validity_enter_interactive<bool>(0, 1);

}

void Animal_kotkov::print(std::ostream& stream, bool pretty) {
	print_value(stream, _name, "���:            ", pretty);
	print_value(stream, _month_of_birth, "����� ��������: ", pretty);
	print_value(stream, _year_of_birth, "��� ��������:   ", pretty);
	print_value(stream, _weight, "��� (��):       ", pretty);
	print_value(stream, _predator, "������ (1 - ��, 0 - ���): ", pretty);
}
