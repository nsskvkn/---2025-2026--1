#ifndef IDIGITWORKER_H
#define IDIGITWORKER_H

#include <string>
using namespace std;

class IDigitWorker {
public:
    virtual string GetDigits() const = 0;
    virtual ~IDigitWorker() {}
};

#endif 
