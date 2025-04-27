#include <iostream>
#include "Strings.h"

using namespace std; 

// Демонстрація поліморфізму
void processString(Strings* strObj) {
    cout << "Початковий рядок: " << strObj->getStr() << endl;
    cout << "Довжина: " << strObj->calculateLength() << endl;
    
    strObj->sortString();
    cout << "Відсортований рядок: " << strObj->getStr();
}

int main() {
    UpperCaseString upper("HelloWorld");
    LowerCaseString lower("PolyMorphism");

    Strings* strings[] = { &upper, &lower };

    for (auto* str : strings) {
        processString(str);
    }

    return 0;
}