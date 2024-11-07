#include "kotkov_widget.h"
#include "Animal_kotkov.h"
#include "Zoo_kotkov.h"
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
    return QSize(w,h);
}
void Kotkov_Widget::get_table_size(){
    auto animals = zoo.get_animals();
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
        zoo.draw(painter, table_size);
        resize(minimumSizeHint());
    }
}

void Kotkov_Widget::load(QString& path){
    std::ifstream in(path.toStdString());
    zoo.delete_data();
    zoo.load_data(in);
    get_table_size();
    update();
}
