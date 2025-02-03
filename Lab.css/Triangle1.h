#include "Triangle.h"
#include <cmath> // для sqrt

// Конструктор за замовчуванням
Triangle::Triangle() {
    x1 = y1 = x2 = y2 = x3 = y3 = 0;
}

// Конструктор з параметрами
Triangle::Triangle(double a, double b, double c, double d, double e, double f) {
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
    x3 = e;
    y3 = f;
}

// Функція для встановлення координат
void Triangle::setCoordinates(double a, double b, double c, double d, double e, double f) {
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
    x3 = e;
    y3 = f;
}

// Обчислення периметра
double Triangle::getPerimeter() {
    double sideA = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double sideB = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double sideC = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    return sideA + sideB + sideC;
}

// Обчислення площі
double Triangle::getArea() {
    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return area;
}
