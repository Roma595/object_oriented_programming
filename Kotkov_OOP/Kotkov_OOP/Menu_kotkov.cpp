#include <iostream>
#include "Menu_kotkov.h"
#include "Zoo_kotkov.h"
#include "Animal_kotkov.h"
#include "Bird.h"
#include <boost/serialization/shared_ptr.hpp>
#include "Utilities_kotkov.h"

void print_menu() {
	std::cout << "            Меню\n" << std::endl;
	std::cout << "1. Добавить животное." << std::endl;
	std::cout << "2. Добавить птицу." << std::endl;
	std::cout << "3. Просмотр всех животных." << std::endl;
	std::cout << "4. Сохранить данные." << std::endl;
	std::cout << "5. Загрузить данные." << std::endl;
	std::cout << "6. Удалить данные." << std::endl;
	std::cout << "0. Выход." << std::endl;
	std::cout << std::endl;
}

void add_animal(Zoo_kotkov& zoo) {
	std::shared_ptr<Animal_kotkov> animal = std::make_shared<Animal_kotkov>();
	animal->input_animal();
	zoo.add_animal(animal);
	
	std::cout << "\nЖивотное добавлено.\n" << std::endl;
}

void add_bird(Zoo_kotkov& zoo) {
	std::shared_ptr<Animal_kotkov> bird = std::make_shared<Bird>();
	bird->input_animal();
	zoo.add_animal(bird);

	std::cout << "\nПтица добавлена.\n" << std::endl;
}

void view_data(Zoo_kotkov& zoo) {
	if (!zoo.get_animals().empty()) {
		zoo.print_data();
	}
	else {
		std::cout << "\nДанных нет.\n" << std::endl;
	}
}

void save_data(Zoo_kotkov& zoo) {
	if (!zoo.get_animals().empty()) {
		std::cout << "Введите название файла:" << std::endl;
		std::ofstream stream(read_string(std::cin));
		if (!stream) {
			std::cout << "Ошибка: невозможно открыть файл." << std::endl;
			return;
		}
		zoo.save_data(stream);
		std::cout << "\nДанные сохранены.\n" << std::endl;
	}
	else {
		std::cout << "\nДанных нет.\n" << std::endl;
	}
}

void load_data(Zoo_kotkov& zoo) {
	std::cout << "При загрузке данных из файла, текущие данные будут удалены. Вы уверены? (1 - да, 0 - нет)" << std::endl;
	bool contin = validity_enter_interactive<bool>(0, 1);
	if (contin) {
		zoo.delete_data();
		std::cout << "Введите название файла:" << std::endl;
		std::ifstream stream(read_string(std::cin));
		if (!stream) {
			std::cout << "Ошибка: невозможно открыть файл." << std::endl;
			return;
		}
		if (zoo.load_data(stream)) {
			std::cout << "\nДанные загружены.\n" << std::endl;
		}
	}
	
}

void delete_data(Zoo_kotkov& zoo) {
	zoo.delete_data();
	std::cout << "\nДанные удалены" << std::endl;
}


void main_menu() {
	Zoo_kotkov zoo;
	int chooice = -1;
	do {
		print_menu();
		chooice = validity_enter_interactive(0, 6);
		switch (chooice) {
		case 1: {
			add_animal(zoo);
			break;
		};
		case 2: {
			add_bird(zoo);
			break;
		};
		case 3: {
			view_data(zoo);
			break;
		};
		case 4: {
			save_data(zoo);
			break;
		};
		case 5: {
			load_data(zoo);
			break;
		};
		case 6: {
			delete_data(zoo);
			break;
		}

		}
	} while (chooice != 0);
}

