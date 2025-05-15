#pragma once

#include "Figure.h"

class Triangle :
    public Figure
{
    
    int h;
    int a;
public:
    Triangle(int a, int b) 
    {
        cout << "Triangle constructor" << endl;
        SetName("Triangle");
        h = a;
        this->a = b;
    }
    virtual void ShowArea() const;

    virtual ~Triangle()
    {
        cout << "Destructor Triangle" << endl;
      
    }
};