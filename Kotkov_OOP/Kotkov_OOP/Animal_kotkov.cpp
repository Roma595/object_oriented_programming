#include <iostream>
#include <fstream>
#include "Animal_kotkov.h"
#include "Utilities_kotkov.h"

void Animal_kotkov::input_animal() {
	std::cout << "������� ���:" << std::endl;
	Name = read_string(std::cin);

	std::cout << "������� ����� ��������:" << std::endl;
	Month_of_birth = validity_enter_interactive<int>(1, 12);

	std::cout << "������� ��� ��������:" << std::endl;
	Year_of_birth = validity_enter_interactive<int>(1900, 2024);

	std::cout << "������� ��� (��):" << std::endl;
	Weight = validity_enter_interactive<double>(0.5, 7000.0);

	std::cout << "��� �������� ������? (1 - ��, 0 - ���):" << std::endl;
	Predator = validity_enter_interactive<bool>(0, 1);

}

void Animal_kotkov::print(std::ostream& stream, bool pretty) {
	print_value(stream, Name, "���:            ", pretty);
	print_value(stream, Month_of_birth, "����� ��������: ", pretty);
	print_value(stream, Year_of_birth, "��� ��������:   ", pretty);
	print_value(stream, Weight, "��� (��):       ", pretty);
	print_value(stream, Predator, "������ (1 - ��, 0 - ���): ", pretty);
}
