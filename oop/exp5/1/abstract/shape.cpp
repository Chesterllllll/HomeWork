#include "shape.h"
#include <cmath>
#include <iostream>
const double PI = acos(-1);
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

double Circle::getArea() const {
    return radius * radius * PI;
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setHeight(double h) {
    height = h;
}

double Rectangle::getArea() const {
    using namespace std;
    return width * height;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::getWidth() const {
    return width;
}



void Square::setSideLength(double d) {
    Rectangle::setWidth(d);
    Rectangle::setHeight(d);
}

double Square::getSideLength() const {
    return getWidth();
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() const {
    return radius;
}
