//============================================================================
// Name        : LAB1.cpp
// Author      : jimmy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    Rectangle rect;
    Rectangle rect2 = rect;

    rect2.set_values(4,5);
    cout << "area for rect2" << rect2.area() << endl;
    cout << "area  for rect" << rect.area() << endl;

    Rectangle *pRect; //  a pointer to the object

    pRect = &rect;




	return 0;
}
