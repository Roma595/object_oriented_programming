#ifndef KOTKOV_WIDGET_H
#define KOTKOV_WIDGET_H

#include <QWidget>
#include "Zoo_kotkov.h"

class Kotkov_Widget : public QWidget
{
    Q_OBJECT

public:
    Zoo_kotkov zoo;
    std::vector<int> table_size {3, 14, 12, 3, 7, 13};
    explicit Kotkov_Widget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    void load(QString& path);
    void get_table_size();
    QSize minimumSizeHint() const override;

};

#endif // KOTKOV_WIDGET_H
