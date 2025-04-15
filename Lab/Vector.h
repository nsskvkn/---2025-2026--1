#pragma once

class Vector {
private:
    double x;
    double y;
public:
    // За замовчуванням
    Vector();

    Vector(double xVal, double yVal = 0.0);

    // Копіювання
    Vector(const Vector& other);

    double GetX() const;
    void SetX(double value);
    double GetY() const;
    void SetY(double value);

    // Overload "+"
    Vector operator+(const Vector& other) const;

    // Overload "-"
    Vector operator-(const Vector& other) const;

    ~Vector();
};
