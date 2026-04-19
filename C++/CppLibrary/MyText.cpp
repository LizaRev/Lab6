#include "MyText.h"
#include <iostream>
#include <cmath>

MyText::MyText() {
    lines = nullptr;
    count = 0;
}

MyText::~MyText() {
    Clear();
}

void MyText::AddLine(std::string text) {
    MyString** newLines = new MyString*[count + 1];

    for (int i = 0; i < count; i++) {
        newLines[i] = lines[i];
    }

    newLines[count] = new MyString(text);

    delete[] lines;
    lines = newLines;
    count++;
}

void MyText::RemoveLine(int index) {
    if (index < 0 || index >= count) return;

    MyString** newLines = new MyString*[count - 1];

    for (int i = 0; i < index; i++) {
        newLines[i] = lines[i];
    }

    for (int i = index + 1; i < count; i++) {
        newLines[i - 1] = lines[i];
    }

    delete[] lines;
    lines = newLines;
    count--;
}

void MyText::Clear() {
    if (lines != nullptr) {
        for (int i = 0; i < count; i++) {
            delete lines[i];
        }
        delete[] lines;
    }
    lines = nullptr;
    count = 0;
}

int MyText::GetShortestLineLength() const {
    if (count == 0) return 0;

    int min = lines[0]->Length();
    for (int i = 1; i < count; i++) {
        int currentLength = lines[i]->Length();
        if (currentLength < min) {
            min = currentLength;
        }
    }
    return min;
}

double MyText::GetConsonantsPercentage() const {
    int chars = 0, cons = 0;

    for (int i = 0; i < count; i++) {
        chars += lines[i]->Length();
        cons += lines[i]->CountConsonants();
    }

    return (chars == 0) ? 0 : (double)cons / chars * 100;
}

void MyText::ClearAllEdges() {
    for (int i = 0; i < count; i++) {
        lines[i]->ClearEdges();
    }
}

void MyText::ReplaceAllMultipleSpacesWithOne() {
    for (int i = 0; i < count; i++) {
        lines[i]->ReplaceManySpacesWithOne();
    }
}

std::string MyText::GetText() const {
    std::string result = "";
    for (int i = 0; i < count; i++) {
        result = result + std::to_string(i + 1) + ": " + lines[i]->getValue() + " ";
    }
    return result;
}



