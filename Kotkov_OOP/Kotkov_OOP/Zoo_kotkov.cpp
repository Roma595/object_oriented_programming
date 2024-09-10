#include "Zoo_kotkov.h"
#include "Utilities_kotkov.h"

void Zoo_kotkov::add_animal(Animal_kotkov *animal) {
	_animals.push_back(animal);
}

void Zoo_kotkov::print_data(std::ostream& stream, bool pretty) {
	
	for (auto an : _animals) {
		stream << "ANIMAL" << std::endl;
		if (pretty) std::cout << std::endl;

		an->print(stream, pretty);
		if (pretty) {
			stream << std::endl;
		}
	}
	if (!pretty) {
		stream << "END" << std::endl;
	}
}

void Zoo_kotkov::delete_data() {
	for (auto an : _animals) {
		delete an;
	}
	_animals.clear();
}

bool Zoo_kotkov::load_data(std::ifstream& stream) {
	for (std::string section = " "; section != "END"; stream >> section) {
		if (stream.eof()) {
			std::cout << "Ошибка: некорректный формат файла, отсутствует секция \"END\"." << std::endl;
			delete_data();
			return false;
		}
		if (section == " ") {
			continue;
		}
		if (section == "ANIMAL") {
			Animal_kotkov* animal = new Animal_kotkov;
			if (animal->import_animal(stream)) {
				_animals.push_back(animal);
			}
			else {
				delete animal;
				delete_data();
				std::cout << "Ошибка: некорректные данные внутри файла." << section << std::endl;
				return false;
			}
			
		}
		else {
			std::cout << "Ошибка: некорректный формат файла." << section << std::endl;
			delete_data();
			return false;
		}
	}
	return true;
}

std::vector<Animal_kotkov*> Zoo_kotkov::get_animals() {
	return _animals;
}


