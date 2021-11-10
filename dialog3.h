#ifndef DIALOG3_H
#define DIALOG3_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QWidgetSet>
#include <QTextEdit>
#include <QComboBox>

class dialog3 : public QWidget
{
public:
    explicit dialog3(QWidget *parent = nullptr);

protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
    QLineEdit * edit1;
    QLineEdit * edit2;
    QLineEdit * edit3;
    QLineEdit * edit4;
    QLineEdit * edit5;
    QTextEdit * edit6;
    QComboBox * edit7;
    QLabel * lblName;
    QLabel * lblCampany;
    QLabel * lblPhone;
    QLabel * lblEmail;
    QLabel * lblPrbTitle;
    QLabel * lblSmInf;
    QLabel * lblReprod;
    QPushButton * Reset;
    QPushButton * submit;
    QPushButton * dSubmit;


};

#endif // DIALOG3_H
