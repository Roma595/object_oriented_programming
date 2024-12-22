#include "Zoo_kotkov.h"
#include "Utilities_kotkov.h"
#include "Bird.h"
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/export.hpp>

BOOST_CLASS_EXPORT(Bird);

void Zoo_kotkov::add_animal(std::shared_ptr<Animal_kotkov> animal) {
	_animals.push_back(animal);
}

void Zoo_kotkov::save_data(std::ostream& stream) {
	boost::archive::text_oarchive ar(stream);
	ar& *this;
	/*stream << _animals.size() << std::endl;;
	boost::archive::text_oarchive ar(stream);
	for (auto an : _animals) {
		ar& an;
	}*/
}

void Zoo_kotkov::print_data() {
	for (auto an : _animals) {
		std::cout << std::endl;
		an->print(std::cout, true);
		std::cout << std::endl;
	}
}

void Zoo_kotkov::delete_data() {
	_animals.clear();
}

bool Zoo_kotkov::load_data(std::ifstream& stream) {
	boost::archive::text_iarchive ar(stream);
	ar& *this;
	return true;
}

std::vector<std::shared_ptr<Animal_kotkov>> Zoo_kotkov::get_animals() {
	return _animals;
}


