#pragma once
#include "Line.h"

class Segment : public Line {
    
public:
    Segment();

    Segment(double x1, double y1, double x2, double y2);

    Segment(const Segment& other);

    double getAngle() const;
};