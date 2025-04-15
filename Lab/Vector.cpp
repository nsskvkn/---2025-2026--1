#include <iostream>
#include "Vector.h"

class Vector {
    private:
        double x;
        double y;
    
    public:

        Vector() : x(0), y(0) {}
    
        // Конструктор з параметрами
        Vector(double xVal, double yVal = 0) : x(xVal), y(yVal) {}
    
        
        Vector(const Vector& other) : x(other.x), y(other.y) {}
    

        double GetX() const { return x; }
        double GetY() const { return y; }
    

        void SetX(double value) { x = value; }
        void SetY(double value) { y = value; }
    
        // Overload "+"
        Vector operator+(const Vector& other) const {
            return Vector(x + other.x, y + other.y);
        }
    
        // Overload "-"
        Vector operator-(const Vector& other) const {
            return Vector(x - other.x, y - other.y);
        }
    
        ~Vector() {}
    };