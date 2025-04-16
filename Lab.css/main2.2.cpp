#include <iostream>
#include "Line.h"

using namespace std;

int main() {
    Line line1("....");
    UpperLine line2(".....");
    LowerLine line3(".....");

    Line* lines[3] = { &line1, &line2, &line3 };

    char buffer[100];

    for (int i = 0; i < 3; i++) {
        cout << lines[i]->getText() << "\n";
        cout << lines[i]->getLength() << "\n";
        lines[i]->sortText(buffer);
        cout << buffer << "\n";
    }

    return 0;
}
