#include <iostream>
#include "Menu_kotkov.h"
#include "Zoo_kotkov.h"
#include "Animal_kotkov.h"
#include "Utilities_kotkov.h"

void print_menu() {
	std::cout << "            ����\n" << std::endl;
	std::cout << "1. �������� ��������." << std::endl;
	std::cout << "2. �������� ���� ��������." << std::endl;
	std::cout << "3. ��������� ������." << std::endl;
	std::cout << "4. ��������� ������." << std::endl;
	std::cout << "5. ������� ������." << std::endl;
	std::cout << "0. �����." << std::endl;
	std::cout << std::endl;
}

void add_animal(Zoo_kotkov& zoo) {
	Animal_kotkov* animal = new Animal_kotkov;
	animal->input_animal();
	zoo.add_animal(animal);
	
	std::cout << "\n�������� ���������.\n" << std::endl;
}

void view_data(Zoo_kotkov& zoo) {
	if (!zoo.get_animals().empty()) {
		zoo.print_data(std::cout, true);
	}
	else {
		std::cout << "\n������ ���.\n" << std::endl;
	}
}


void save_data(Zoo_kotkov& zoo) {
	if (!zoo.get_animals().empty()) {
		std::cout << "������� �������� �����:" << std::endl;
		std::ofstream stream(read_string(std::cin));
		if (!stream) {
			std::cout << "������: ���������� ������� ����." << std::endl;
			return;
		}
		zoo.print_data(stream, false);
		std::cout << "\n������ ���������.\n" << std::endl;
	}
	else {
		std::cout << "\n������ ���.\n" << std::endl;
	}
}

void load_data(Zoo_kotkov& zoo) {
	std::cout << "��� �������� ������ �� �����, ������� ������ ����� �������. �� �������? (1 - ��, 0 - ���)" << std::endl;
	bool contin = validity_enter_interactive<bool>(0, 1);
	if (contin) {
		zoo.delete_data();
		std::cout << "������� �������� �����:" << std::endl;
		std::ifstream stream(read_string(std::cin));
		if (!stream) {
			std::cout << "������: ���������� ������� ����." << std::endl;
			return;
		}
		if (zoo.load_data(stream)) {
			std::cout << "\n������ ���������.\n" << std::endl;
		}
	}
	
}

void delete_data(Zoo_kotkov& zoo) {
	zoo.delete_data();
}


void main_menu() {
	Zoo_kotkov zoo;
	int chooice = -1;
	do {
		print_menu();
		chooice = validity_enter_interactive(0, 5);
		switch (chooice) {
		case 1: {
			add_animal(zoo);
			break;
		};
		case 2: {
			view_data(zoo);
			break;
		};
		case 3: {
			save_data(zoo);
			break;
		};
		case 4: {
			load_data(zoo);
			break;
		};
		case 5: {
			delete_data(zoo);
			break;
		}

		}
	} while (chooice != 0);
}

