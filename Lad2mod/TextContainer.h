#ifndef TEXTCONTAINER_H
#define TEXTCONTAINER_H

#include "DigitLine.h"
#include <vector>
#include <string>
using namespace std;

class TextContainer : public IDigitWorker {
private:
    vector<DigitLine> lines;
public:
    TextContainer();
    TextContainer(const vector<string>& texts);

    void AddLine(const DigitLine& line);
    void RemoveLine(int index);
    void ReplaceLine(int index, const DigitLine& line);
    void Clear();

    int GetLineCount() const;
    int GetCharCount() const;
    virtual string GetDigits() const override;
    DigitLine GetLine(int index) const;
    DigitLine GetShortestLine() const;
    float DigitRatio() const;
};

#endif
