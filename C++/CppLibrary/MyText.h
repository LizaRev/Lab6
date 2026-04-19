#ifndef MYTEXT_H
#define MYTEXT_H

#include "MyString.h"
#include <string>

class MyText {
    private:
        MyString** lines;
        int count;
    public:
        MyText();
        ~MyText();

        void AddLine(std::string line);
        void RemoveLine(int index);
        void Clear();

        int GetShortestLineLength()const;
        double GetConsonantsPercentage() const;

        void ClearAllEdges();
        void ReplaceAllMultipleSpacesWithOne();

        std::string GetText() const; 
};

#endif

