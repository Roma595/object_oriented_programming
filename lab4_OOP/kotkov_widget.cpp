#include "../lab4/kotkov_widget.h"
#include "../lab4/Animal_kotkov.h"
#include "../lab4/Zoo_kotkov.h"
#include <string>
#include <QPainter>
#include <fstream>


Kotkov_Widget::Kotkov_Widget(QWidget *parent)
    : QWidget{parent}
{}

QSize Kotkov_Widget::minimumSizeHint() const{
    int w = 40;
    int h = 40;
    h += 50 * (zoo.get_animals().size() + 1);
    for(auto& item : table_size){
        w += item * 8;
    }
    h += 40;
    w += 40;
    return QSize(w,h);
}
void Kotkov_Widget::get_table_size(){
    auto animals = zoo.get_animals();
    animals.erase(std::next(animals.begin()));
    for(int i = 0; i < animals.size(); ++i){
        std::string name = animals[i]->get_name();
        std::string weight = std::to_string(animals[i]->get_weight());
        if(name.size() > table_size[0]){
            table_size[0] = name.size();
        }
        if(weight.size() > table_size[3]){
            table_size[3] = weight.size();
        }
    }
}

void Kotkov_Widget::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    if(!zoo.get_animals().empty()){
        get_table_size();
        zoo.draw(painter, table_size);
        resize(minimumSizeHint());
    }
}

void Kotkov_Widget::load(QString& path){
    std::ifstream in(path.toLocal8Bit());
    zoo.delete_data();
    zoo.load_data(in);
    get_table_size();
    std::cout << zoo.get_animals().size();
    update();
}

void Kotkov_Widget::save(QString& path){
    std::ofstream out(path.toLocal8Bit());
    zoo.save_data(out);
    update();
}

void Kotkov_Widget::clear(){
    zoo.delete_data();
    update();
}
