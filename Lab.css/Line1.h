#ifndef STRINGS_H
#define STRINGS_H
#include <string>

class Strings {
protected:
    std::string str;

public:
    explicit Strings(const std::string& s);
    virtual ~Strings() = default;

    virtual int calculateLength() const = 0;
    virtual void sortString() = 0;
    std::string getStr() const;
};

class UpperCaseString : public Strings {
public:
    explicit UpperCaseString(const std::string& s);
    int calculateLength() const override;
    void sortString() override;
};

class LowerCaseString : public Strings {
public:
    explicit LowerCaseString(const std::string& s);
    int calculateLength() const override;
    void sortString() override;
};

#endif 