#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>
#include "ISpaceRemover.h"

class MyString : public ISpaceRemover {
private:
    std::string value;

public:
    MyString(std::string _value);
    ~MyString();
    
    std::string getValue() const;
    int Length() const;
    int CountConsonants() const;

    virtual void ReplaceManySpacesWithOne();
    virtual void ClearEdges();
};

#endif