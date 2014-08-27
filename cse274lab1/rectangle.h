/*
 * rectangle.h
 *
 *  Created on: Aug 27, 2014
 *      Author: xuj4
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_


class Rectangle {

 private:
    int width, height;


  public:
    Rectangle();
    void set_values (int,int);
    int area() {return width*height;}
};


#endif /* RECTANGLE_H_ */
