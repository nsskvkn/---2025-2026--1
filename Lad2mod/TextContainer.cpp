#include "TextContainer.h"
using namespace std;

TextContainer::TextContainer() : lines()
{}

TextContainer::TextContainer(const vector<string>& texts) {
    for (const auto& t : texts)
        lines.emplace_back(t);
}

void TextContainer::AddLine(const DigitLine& line) {
    lines.push_back(line);
}

void TextContainer::RemoveLine(int index) {
    if (index < 0 || index >= (int)lines.size()) return;
    lines.erase(lines.begin() + index);
}

void TextContainer::ReplaceLine(int index, const DigitLine& line) {
    if (index < 0 || index >= (int)lines.size()) return;
    lines[index] = line;
}

void TextContainer::Clear() {
    lines.clear();
}

int TextContainer::GetLineCount() const {
    return (int)lines.size();
}

int TextContainer::GetCharCount() const {
    int count = 0;
    for (const auto& l : lines)
        count += (int)l.GetValue().size();
    return count;
}

string TextContainer::GetDigits() const {
    string res;
    for (const auto& l : lines)
        res += l.GetDigits();
    return res;
}

DigitLine TextContainer::GetLine(int index) const {
    if (index < 0 || index >= (int)lines.size())
        return DigitLine("");
    return lines[index];
}

DigitLine TextContainer::GetShortestLine() const {
    if (lines.empty()) return DigitLine("");
    DigitLine shortest = lines[0];
    for (const auto& l : lines) {
        if (l.GetValue().size() < shortest.GetValue().size())
            shortest = l;
    }
    return shortest;
}

float TextContainer::DigitRatio() const {
    int totalChars = GetCharCount();
    if (totalChars == 0) return 0.0f;
    int totalDigits = 0;
    for (const auto& l : lines)
        totalDigits += (int)l.GetDigits().size();
    return static_cast<float>(totalDigits) / totalChars;
}
