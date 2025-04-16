#ifndef LINE_H
#define LINE_H

class Line {
protected:
    const char* text;
public:
    Line(const char* t);
    virtual ~Line();
    const char* getText();
    virtual int getLength();
    virtual void sortText(char* result);
};

class UpperLine : public Line {
public:
    UpperLine(const char* t);
    int getLength() override;
    void sortText(char* result) override;
};

class LowerLine : public Line {
public:
    LowerLine(const char* t);
    int getLength() override;
    void sortText(char* result) override;
};

#endif
