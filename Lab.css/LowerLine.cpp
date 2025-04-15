#include "Line.cpp"
#include <cctype>
#include <algorithm>
using namespace std;

class LowerLine : public Line {
public:
    LowerLine(const string& t) : Line(t) {}
    virtual ~LowerLine() {}

    int CalculateLength() const override {
        string s = text;
        for (char& c : s) c = tolower(c);
        return s.length();
    }

    string GetProcessedString() const override {
        string s = text;
        for (char& c : s) c = tolower(c);
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        return s;
    }
};
