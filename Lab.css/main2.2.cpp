#include <iostream>
#include <vector>
using namespace std;

// Підключаємо дочірні класи (які вже містять базовий)
#include "derived.cpp"

int main() {
    // Створюємо базовий об'єкт та копію його
    Line l1;
    Line l2(l1);

    // Створюємо вектор з вказівниками на об'єкти типу Line
    vector<Line*> lines;
    lines.push_back(new Line("Example"));        // просто рядок
    lines.push_back(new UpperLine("Example"));   // перетворює в верхній регістр
    lines.push_back(new LowerLine("Example"));   // перетворює в нижній регістр

    // Проходимо по кожному об'єкту та викликаємо методи
    for (const auto& line : lines) {
        cout << "Original line: " << line->getText()
             << " Length: " << line->calculateLength()
             << " Processed string: " << line->getProcessedString() << endl;
    }

    // Звільняємо памʼять
    for (auto line : lines) {
        delete line;
    }

    return 0;
}
