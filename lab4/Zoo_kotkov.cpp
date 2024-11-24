#include "Zoo_kotkov.h"
#include "Bird.h"
#include "Animal_kotkov.h"
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/export.hpp>
#include <QPainter>

BOOST_CLASS_EXPORT(Animal_kotkov)
BOOST_CLASS_EXPORT(Bird)
void Zoo_kotkov::save_data(std::ostream& stream) {
    boost::archive::text_oarchive ar(stream);
    ar& *this;
}

void Zoo_kotkov::delete_data() {
    _animals.clear();
}

void Zoo_kotkov::draw(QPainter& painter, std::vector<int>& table_size){
    int x = 40;
    int y = 40;
    int height = 50;
    QStringList colNames = {"Имя", "Месяц рождения", "Год рождения", "Вес", "Хищник?", "Умеет летать?"};
    for ( int i = 0; i < colNames.size(); ++i){
        QRect cellRect(x, y, table_size[i] * 8, height);
        painter.drawRect(cellRect);
        painter.drawText(cellRect, Qt::AlignCenter, colNames[i]);
        x += table_size[i] * 8;
    }
    x = 40;
    y += height;

    std::for_each(_animals.begin(),_animals.end(), std::bind(&Animal_kotkov::draw,
                                                         std::placeholders::_1,
                                                         std::ref(painter),
                                                         x,
                                                         std::ref(y),
                                                         std::ref(table_size)));
}



bool Zoo_kotkov::load_data(std::ifstream& stream) {
    boost::archive::text_iarchive ar(stream);
    ar& *this;
    return true;
}

const std::vector<std::shared_ptr<Animal_kotkov>> Zoo_kotkov::get_animals() const{
	return _animals;
}

std::vector<std::shared_ptr<Animal_kotkov>>& Zoo_kotkov::get_animals_ref(){
    return _animals;
}


