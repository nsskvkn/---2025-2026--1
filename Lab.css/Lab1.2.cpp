#include <iostream> 
#include <cmath> // для sqrt

using namespace std;

class Triangle {
public:
    double x1, y1, x2, y2, x3, y3;
    
    Triangle() {
        x1 = y1 = x2 = y2 = x3 = y3 = 0;
    }
    
    Triangle(double a1, double b1, double a2, double b2, double a3, double b3) {
        x1 = a1; y1 = b1;
        x2 = a2; y2 = b2;
        x3 = a3; y3 = b3;
    }

    // Конструктор копіювання
    Triangle(const Triangle& t) {
        x1 = t.x1; y1 = t.y1;
        x2 = t.x2; y2 = t.y2;
        x3 = t.x3; y3 = t.y3;
    }

    // Конструктор переміщення
    Triangle(Triangle&& t) noexcept {
        x1 = t.x1; y1 = t.y1;
        x2 = t.x2; y2 = t.y2;
        x3 = t.x3; y3 = t.y3;
        
        t.x1 = t.y1 = t.x2 = t.y2 = t.x3 = t.y3 = 0;
    }
    
    // Деструктор
    ~Triangle() {
    }
    
    double getPerimeter() {
        double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double side3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        return side1 + side2 + side3;
    }
    
    double getArea() {
        return 0.5 * abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
    }
};
