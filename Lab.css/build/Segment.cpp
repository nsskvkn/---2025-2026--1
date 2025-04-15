#include "Segment.h"
#include <cmath>

// за замовчуванням
Segment::Segment() : Line() {}

// з параметрами
Segment::Segment(double x1, double y1, double x2, double y2) {}

// копіювання
Segment::Segment(const Segment& other) {}

Segment::~Segment() {}

double Segment::getAngle() const {
    return atan2(y2 - y1, x2 - x1) * 180 / M_PI;
}
