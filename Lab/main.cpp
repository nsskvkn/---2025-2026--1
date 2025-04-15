#include <iostream>
#include "Vector.h"

using namespace std;
    
int main() {
        
    Vector vect1;// За замовчуванням
    Vector vect2(32);           
    Vector vect3(22, 40);
    Vector vect4(vect3);// Копіювання

    Vector sum = vect2 + vect3;// Overload "+"
    Vector diff = vect3 - vect2;// Overload "-"

    double inputX, inputY;
    cout << "Введіть значення координати X: ";
    cin >> inputX;
    cout << "Введіть значення координати Y: ";
    cin >> inputY;

    Vector userVector(inputX, inputY);
    cout << "Наш вектор має координати: X = " << userVector.GetX() << ", Y = " << userVector.GetY() << endl;

    return 0;
    }
