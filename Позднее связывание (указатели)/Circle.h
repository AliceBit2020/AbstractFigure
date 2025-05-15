#pragma once

#include "Figure.h"

class Circle :
    public Figure
{

    double r;
public:

    Circle(int r) 
    {
        cout << "Constructor  Circle() " << endl;
        this->r = r;
        SetName("Circle");
    };

    ////virtual void ShowArea() const = 0;/////чисто в≥ртуальний метод
    virtual void ShowArea() const;///////перевизначаЇмо пустий чисто в≥ртуальний метод в≥д батька «јЅќ¬'я«јЌЌя

     ~Circle()
    {
        cout << "Destructor Circle" << endl;
       
    }
};