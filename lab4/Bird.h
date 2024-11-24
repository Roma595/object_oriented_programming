#pragma once
#include "Animal_kotkov.h"
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/export.hpp>


class Bird: public Animal_kotkov{
public:
    Bird() = default;
    virtual ~Bird() = default;

    void draw(QPainter& painter,int x, int& y, std::vector<int>& table_size){
        QStringList cols = {QString::fromLocal8Bit(_name),
                            QString::number(_month_of_birth),
                            QString::number(_year_of_birth),
                            QString::number(_weight),
                            QString::number(_predator),
                            QString::number(_can_fly)};
        for(int i = 0; i < 6; ++i){
            QRect cellRect(x, y, table_size[i] * 8, 50);
            painter.drawRect(cellRect);
            painter.drawText(cellRect,Qt::AlignCenter, cols[i]);

            x += table_size[i] * 8;
        }
        y += 50;
    }

protected:
	bool _can_fly = 0;
private:
	friend class boost::serialization::access;
	template <typename Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& boost::serialization::base_object<Animal_kotkov>(*this);
		ar& _can_fly;
	}
};


