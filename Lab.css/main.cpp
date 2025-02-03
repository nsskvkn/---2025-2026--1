#include <iostream>
#include "Triangle.h"

using namespace std;
int main() {
    double x1, y1, x2, y2, x3, y3;
    
    cout << "\tВведіть координати трикутника (x1 y1 x2 y2 x3 y3):\n ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    Triangle tri(x1, y1, x2, y2, x3, y3);
    
    cout << "\tТочки трикутника:\n";
    cout << " A: (" << tri.getX1() << ", " << tri.getY1();
    cout << " B: (" << tri.getX2() << ", " << tri.getY2();
    cout << " C: (" << tri.getX3() << ", " << tri.getY3();
    
    cout << "Perimeter = " << tri.getPerimeter();
    cout << "Area = " << tri.getArea();
    
    return 0;
}
