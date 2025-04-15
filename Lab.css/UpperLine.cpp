#include "Line.cpp"
#include <cctype>
using namespace std;

class UpperLine : public Line {
public:
    UpperLine(const string& t) : Line(t) {}
    virtual ~UpperLine() {}

    int CalculateLength() const override {
        string s = text;
        for (char& c : s) c = toupper(c);
        return s.length();
    }

    string GetProcessedString() const override {
        string s = text;
        for (char& c : s) c = toupper(c);
        sort(s.begin(), s.end());
        return s;
    }
};
