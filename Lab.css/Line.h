#pragma once

class Line {
private:
    double x1, y1, x2, y2; 

public:
    Line();
    Line(double x1, double y1, double x2, double y2); 
    Line(const Line& other); 

    double GetX1() const;
    double GetY1() const;
    double GetX2() const;
    double GetY2() const;

    double getLength() const; 
};