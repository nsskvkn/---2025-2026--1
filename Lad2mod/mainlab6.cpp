#include <iostream>
#include <vector>
#include "TextContainer.h"
using namespace std;

int main() {
    vector<string> initial = { "a1b2c3", "no digits here", "12345" };
    TextContainer text(initial);

    cout << "Початковий текст:\n";
    for (int i = 0; i < text.GetLineCount(); ++i)
        cout << text.GetLine(i).GetValue() << "\n";

    cout << "Усі цифри: " << text.GetDigits() << "\n";
    cout << "Рядків: " << text.GetLineCount()
         << ", символів: " << text.GetCharCount()
         << ", ratio цифр: " << text.DigitRatio() << "\n";

    text.AddLine(DigitLine("x9y8z7"));
    text.ReplaceLine(1, DigitLine("abc123"));

    cout << "\nПісля додавання і заміни:\n";
    for (int i = 0; i < text.GetLineCount(); ++i)
        cout << text.GetLine(i).GetValue() << "\n";

    text.RemoveLine(0);

    cout << "\nПісля видалення першого рядка:\n";
    for (int i = 0; i < text.GetLineCount(); ++i)
        cout << text.GetLine(i).GetValue() << "\n";

    cout << "\nНайкоротший рядок: "
         << text.GetShortestLine().GetValue() << "\n";

    text.Clear();
    cout << "\nПісля очищення, рядків: "
         << text.GetLineCount() << "\n";

    return 0;
}
