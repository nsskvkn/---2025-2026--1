#ifndef DIGITLINE_H
#define DIGITLINE_H

#include "IDigitWorker.h"
#include <string>
using namespace std;

class DigitLine : public IDigitWorker {
private:
    string value;
public:
    DigitLine();
    DigitLine(const string& text);

    string GetValue() const;
    virtual string GetDigits() const override;
    float DigitRatio() const;
};

#endif // DIGITLINE_H
