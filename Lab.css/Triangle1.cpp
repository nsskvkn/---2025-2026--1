#include "Triangle.h"
#include <cmath>

// Конструктор без параметрів
Triangle::Triangle() {
    x1 = y1 = x2 = y2 = x3 = y3 = 0;
}

// Конструктор з параметрами
Triangle::Triangle(double a, double b, double c, double d, double e, double f) {
    setCoordinates(a, b, c, d, e, f);
}

// Встановлення координат
void Triangle::setCoordinates(double a, double b, double c, double d, double e, double f) {
    x1 = a; y1 = b;
    x2 = c; y2 = d;
    x3 = e; y3 = f;
}

// Знаходження периметра
double Triangle::getPerimeter() {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) +
           sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)) +
           sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
}

// Знаходження площі
double Triangle::getArea() {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}
