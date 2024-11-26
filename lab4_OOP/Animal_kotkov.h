#pragma once
#include <iostream>
#include <string>
#include <boost/serialization/serialization.hpp>
#include <QString>
#include <QPainter>

class Animal_kotkov {
public:
    Animal_kotkov() = default;
    virtual ~Animal_kotkov() = default;

    virtual std::string get_name(){
        return _name;
    }
    virtual int get_month(){
        return _month_of_birth;
    }
    virtual int get_year(){
        return _year_of_birth;
    }
    virtual double get_weight(){
        return _weight;
    }
    virtual bool get_predator(){
        return _predator;
    }
    virtual bool get_fly(){
        return false;
    }

    virtual void set_name(const std::string& name){
        _name = name;
    }

    virtual void set_month(int month){
        _month_of_birth = month;
    }

    virtual void set_year(int year){
        _year_of_birth = year;
    }
    virtual void set_weight(double weight){
        _weight = weight;
    }
    virtual void set_predator(bool predator){
        _predator = predator;
    }
    virtual void draw(QPainter& painter,int x, int& y, std::vector<int>& table_size){
        QStringList cols = {QString::fromLocal8Bit(_name),
                            QString::number(_month_of_birth),
                            QString::number(_year_of_birth),
                            QString::number(_weight),
                            QString::number(_predator),
                             QString::fromStdString("-")};
        for(int i = 0; i < 6; ++i){
            QRect cellRect(x, y, table_size[i] * 8, 50);
            painter.drawRect(cellRect);
            painter.drawText(cellRect,Qt::AlignCenter, cols[i]);

            x += table_size[i] * 8;
        }
        y += 50;
    }

protected:
	std::string _name = "None";
	int _month_of_birth = 0;
	int _year_of_birth = 0;
	double _weight = 0;
	bool _predator = 0;
private:
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& _name;
		ar& _month_of_birth;
		ar& _year_of_birth;
		ar& _weight;
		ar& _predator;
	}
};
