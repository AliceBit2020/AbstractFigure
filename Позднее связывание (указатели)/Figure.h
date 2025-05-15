#pragma once
#include <iostream>

using namespace std;
class Figure///абстрактний клас, не можна створити об'єкт
{
protected:

    char* name;
    
    void SetName(char* n)
    {
        if (name)
        {
            delete[] name;
            name = nullptr;
        }


        int size = strlen(n) + 1;
        name = new char[size];
        strcpy_s(name, size, n);
    }
public:
    Figure() { cout << "Base constr   Figure() " << endl;  name = nullptr; };
   



    void ShowName() {
        cout << name << endl;
    }
    virtual void ShowArea() const =0;/////  чисто віртуальний метод , такі методи роблять класи абстрактними


    virtual ~Figure()
    {
        cout << "Destructor Figure" << endl;
        if (name)
            delete[] name;
    }
  
};