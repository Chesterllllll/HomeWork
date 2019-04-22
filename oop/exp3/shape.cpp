#include "shape.h"

#include <iostream>
Shape::Shape() {
    using std::cout;
    using std::endl;
    cout << "Shape constructed" << endl;
}


Shape::~Shape() {
    using std::cout;
    using std::endl;
    cout << "Shape destructed" << endl;
}

int Shape::getArea() const {
    using namespace std;
    cout << "GetArea of Shape is called, this function is unvailable." << endl;
    return 0;
}

Rectangle::Rectangle() {
    using std::cout;
    using std::endl;
    cout << "Rectangle constructed" << endl;
}


Rectangle::~Rectangle() {
    using std::cout;
    using std::endl;
    cout << "Rectangle destructed" << endl;
}

Square::Square() {
    using std::cout;
    using std::endl;
    cout << "Square constructed" << endl;
}


Square::~Square() {
    using std::cout;
    using std::endl;
    cout << "Square destructed" << endl;
}


Circle::Circle() {
    using std::cout;
    using std::endl;
    cout << "Circle constructed" << endl;
}


Circle::~Circle() {
    using std::cout;
    using std::endl;
    cout << "Circle destructed" << endl;
}



void Rectangle::setWidth(int w) {
    width = w;
}

void Rectangle::setHeight(int h) {
    height = h;
}

int Rectangle::getArea() const {
    using namespace std;
    cout << "getArea of Rectangle is called" << endl;
    return width * height;
}

int Rectangle::getHeight() const {
    return height;
}

int Rectangle::getWidth() const {
    return width;
}



void Square::setSideLength(int d) {
    Rectangle::setWidth(d);
    Rectangle::setHeight(d);
}

int Square::getArea() const {
    using namespace std;
    cout << "getArea of Square is called" << endl;
    return getWidth() * getWidth();
}

int Square::getSideLength() const {
    return getWidth();
}

void Circle::setRadius(int r) {
    radius = r;
}

int Circle::getRadius() const {
    return radius;
}
