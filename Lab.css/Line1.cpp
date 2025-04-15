// line.cpp
#include <string>
#include <algorithm> // для sort
using namespace std;

class Line {
protected:
    string text; 

public:
    // Конструктор без параметрів
    Line() : text("") {}

    // Конструктор з параметром (ініціалізує текст)
    Line(const string &text) : text(text) {}

    // Копіюючий конструктор
    Line(const Line &other) : text(other.text) {}

    // Метод для отримання тексту (геттер)
    string getText() const { return text; }

    // Метод для обчислення довжини тексту
    virtual int calculateLength() const {
        return static_cast<int>(text.length());
    }

    // Метод для сортування символів у рядку
    virtual string getProcessedString() const {
        string result = text;
        sort(result.begin(), result.end()); // сортуємо за зростанням
        return result;
    }

};
