#pragma once

#include "Figure.h"

class Circle :
    public Figure
{
    char* ch;
    double r;
public:

    Circle(int r) 
    {
        cout << "Constructor  Circle() " << endl;
        this->r = r;
        SetName("Circle");
        ch = new char[5];
    };

    ////virtual void ShowArea() const = 0;/////чисто віртуальний метод
    virtual void ShowArea() const;///////перевизначаємо пустий чисто віртуальний метод від батька ЗАБОВ'ЯЗАННЯ

     ~Circle()
    {
        cout << "Destructor Circle" << endl;
        delete[]ch;
       
    }
};