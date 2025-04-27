#include "Strings.h"
#include <algorithm>
#include <cctype>

using namespace std; 
// Базовий клас
Strings::Strings(const string& s) : str(s) {}

string Strings::getStr() const {
    return str;
}

// UpperCaseString
UpperCaseString::UpperCaseString(const string& s) : Strings(s) {
    for (auto& c : str) c = toupper(c); 
}

int UpperCaseString::calculateLength() const {
    return str.length();
}

void UpperCaseString::sortString() {
    sort(str.begin(), str.end()); 
}

// LowerCaseString
LowerCaseString::LowerCaseString(const string& s) : Strings(s) {
    for (auto& c : str) c = tolower(c); 
}

int LowerCaseString::calculateLength() const {
    return str.length();
}

void LowerCaseString::sortString() {
    sort(str.rbegin(), str.rend()); 
}