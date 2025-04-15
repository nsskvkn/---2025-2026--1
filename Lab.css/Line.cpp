#include <iostream>
#include "Line.h"
#include <cmath>

class Line {
    private:
    double x1, y1, x2, y2;
    
    public:
    double getX1() const { return x1; }
    double getY1() const { return y1; }
    double getX2() const { return x2; }
    double getY2() const { return y2; }

    // за замовчуванням
    Line() : x1(0), y1(0), x2(0), y2(0) { }

    //  з параметрами
    Line(double x1, double y1, double x2, double y2)
        : x1(x1), y1(y1), x2(x2), y2(y2) { }

    // копіювання
    Line(const Line &other)
        : x1(other.x1), y1(other.y1), x2(other.x2), y2(other.y2) { }

    ~Line() { }

    double getLength() const {
        return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }
};