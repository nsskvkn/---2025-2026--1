#include "DigitLine.h"
using namespace std;

DigitLine::DigitLine() : value("")
{}

DigitLine::DigitLine(const string& text)
    : value(text)
{}

string DigitLine::GetValue() const {
    return value;
}

string DigitLine::GetDigits() const {
    string result;
    for (char c : value) {
        if (c >= '0' && c <= '9')
            result += c;
    }
    return result;
}

float DigitLine::DigitRatio() const {
    if (value.empty()) return 0.0f;
    int count = 0;
    for (char c : value) {
        if (c >= '0' && c <= '9') count++;
    }
    return static_cast<float>(count) / value.size();
}
