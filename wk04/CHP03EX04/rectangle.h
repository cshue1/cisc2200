/* CHRISTINE SHUE
   DUE: FEBRUARY 10, 2017
   PURPOSE: rectangle.h creates a template class Rectangle to accept
   int and double dimensions. It calculates a rectangle's area and
   perimenter and prints out the rectangle's information. */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

template <class T>
class Rectangle
{
private:
    T length;
    T width;
public:
    Rectangle()
    {
	length = 0;
	width  = 0;
    }
    
    Rectangle(T l,T w)
    {
	length = l;
	width  = w;
    }
    
    T getLength() const
    {
	return length;
    }
    
    void setLength(T l)
    {
	length = l;
    }
    
    T getWidth() const
    {
	return width;
    }
    
    void setWidth(T w)
    {
	width = w;
    }
    
    T getArea() const
    {
	return length * width;
    }
    
    T getPerimeter() const
    {
	return 2 * length + 2 * width;
    }
    
    T printRect()const
    {
	cout << "This rectangle's info is: " << endl;
	cout << "   LENGTH = " << length << endl;
	cout << "    WIDTH = " << width << endl;
	cout << "     AREA = "  << getArea() << endl;
	cout << "PERIMETER = " << getPerimeter() << endl;
    }
    
    ~Rectangle(){}
};

#endif
