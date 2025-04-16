#include "Line.h"
#include <cstring>
#include <cctype>
#include <algorithm>

Line::Line(const char* t) {
    text = t;
}

Line::~Line() {}

const char* Line::getText() {
    return text;
}

int Line::getLength() {
    return strlen(text);
}

void Line::sortText(char* result) {
    strcpy(result, text);
    std::sort(result, result + strlen(result));
}

UpperLine::UpperLine(const char* t) : Line(t) {}

int UpperLine::getLength() {
    return strlen(text);
}

void UpperLine::sortText(char* result) {
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        result[i] = std::toupper(text[i]);
    }
    result[len] = '\0';
    std::sort(result, result + len);
}

LowerLine::LowerLine(const char* t) : Line(t) {}

int LowerLine::getLength() {
    return strlen(text);
}

void LowerLine::sortText(char* result) {
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        result[i] = std::tolower(text[i]);
    }
    result[len] = '\0';
    std::sort(result, result + len);
    std::reverse(result, result + len);
}
