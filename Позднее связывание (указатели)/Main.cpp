#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{



    {
        //Rectangle objj;

        Figure* obj=new Circle (5);

        delete obj;
    }

  //  Figure* figure = nullptr;

  //  int choice = 0;

  //  cout << "1. Square circle" << endl;
  //  cout << "2. Square rectangle" << endl;
  //  cout << "3. Square triangle" << endl;
  //  cout << "Make your choice: ";

  //  cin >> choice;

  //  switch (choice)
  //  {
  //      case 1:
  //          figure = new Circle(2);
  //     
  //       
  //          break;
  //      case 2:
  //          figure = new Rectangle(2,3);
  //        
  //          break;
  //      case 3: 
  //          figure = new Triangle(5,4);
  //          
  //          break;
  //  }

  //  figure->ShowArea();////  через вказівник на батьківський клас ми виликаэмо методи дочірніх класів (динамічний поліморфізм і пізднє зв'язування , за рахунок віртуальних методів)



  //// Figure obj;///// не має сенсу створювати обьєкт цього абстрактного класу  ---  чисто віртуальний метод

  //  delete figure;
    return 0;
}