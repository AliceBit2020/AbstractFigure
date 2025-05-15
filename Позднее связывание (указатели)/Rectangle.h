#pragma once

#include "Figure.h"

class Rectangle :
    public Figure
{
    int a;
    int b;
public:
    
    Rectangle(int a, int b) 
    {
        cout << "Rectangle constructor" << endl;
        this->a = a;
        this->b = b;
        SetName("Rectangle");
    }
    virtual void ShowArea() const;
    virtual ~Rectangle()
    {
        cout << "Destructor Rectangle" << endl;
       
    }
};