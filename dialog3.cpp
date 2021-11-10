#include "dialog3.h"
#include <QVBoxLayout>
#include <QApplication>

dialog3::dialog3(QWidget *parent) : QWidget(parent)
{
    //creer les widgets
    createWidgets();


    //les placer
    placeWidgets();


    //metter les connections
    makeConnexions();
}

void dialog3::createWidgets()
{
    lblName = new QLabel("Name :");
    lblCampany = new QLabel("Campany :");
    lblPhone = new QLabel("Phone :");
    lblEmail = new QLabel("Email:");
    lblPrbTitle = new QLabel("Problem Title :");
    lblSmInf = new QLabel("Summary Information :");
    lblReprod = new QLabel("Reproducibility :");
    edit1 = new QLineEdit;
    edit2 = new QLineEdit;
    edit3 = new QLineEdit;
    edit4 = new QLineEdit;
    edit5 = new QLineEdit;
    edit6 = new QTextEdit;
    edit7 = new QComboBox;
    edit6->setPlaceholderText("Placeholder Text");
    Reset = new QPushButton("Reset");
    submit = new QPushButton("Submit");
    dSubmit = new QPushButton("Don't Submit");
    this->setWindowTitle("Report Bug");
}

void dialog3::placeWidgets()
{
   auto mainLayout = new QVBoxLayout;
    auto layout1 = new QVBoxLayout;
    auto layout2 = new QVBoxLayout;
    auto layout3 = new QVBoxLayout;
    auto layout4 = new QVBoxLayout;
    auto layout5 = new QVBoxLayout;
    auto layout6 = new QVBoxLayout;
    auto layout7 = new QVBoxLayout;
    auto layout8 = new QVBoxLayout;

    this->setLayout(mainLayout);
    this->setLayout(layout1);
    this->setLayout(layout2);
    this->setLayout(layout3);
    this->setLayout(layout4);
    this->setLayout(layout5);
    this->setLayout(layout6);
    this->setLayout(layout7);
    this->setLayout(layout8);

    mainLayout->addLayout(layout1);
    mainLayout->addLayout(layout2);
    mainLayout->addLayout(layout3);
    mainLayout->addLayout(layout4);
    mainLayout->addLayout(layout5);
    mainLayout->addLayout(layout6);
    mainLayout->addLayout(layout7);


    layout1->addWidget(lblName);
    layout1->addWidget(edit1);
    layout2->addWidget(lblCampany);
    layout2->addWidget(edit2);
    layout3->addWidget(lblPhone);
    layout3->addWidget(edit3);
    layout4->addWidget(lblEmail);
    layout4->addWidget(edit4);
    layout5->addWidget(lblPrbTitle);
    layout5->addWidget(edit5);
    layout6->addWidget(lblSmInf);
    layout6->addWidget(edit6);
    layout7->addWidget(lblReprod);
    layout7->addWidget(edit7);
    layout8->addWidget(Reset);
    layout8->addWidget(submit);
    layout8->addWidget(dSubmit);


}

void dialog3::makeConnexions()
{


}
