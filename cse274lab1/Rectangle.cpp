/*
 * Rectangle.cpp

 *
 *  Created on: Aug 27, 2014
 *      Author: xuj4
 */

#include <iostream>
#include "rectangle.h"

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::area(){
	return width * height
}


