#include <iostream>
#include "Segment.h"

using namespace std;

int main() {
    Segment seg1(0, 0, 52, 42);
    Segment seg2;
    Segment seg3(seg2);

    cout << "seg1: " << seg1.getLength() << " довжина, " << seg1.getAngle() << "кут" << endl;
    cout << "seg2: " << seg2.getLength() << " довжина, " << seg2.getAngle() << "кут" << endl;
    cout << "seg3: " << seg3.getLength() << " довжина, " << seg3.getAngle() << "кут" << endl;

    return 0;
}
