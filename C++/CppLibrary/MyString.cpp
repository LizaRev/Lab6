#include "MyString.h"
#include <iostream>

MyString::MyString(std::string _value) {
    value = _value;
}

MyString::~MyString() {}

std::string MyString::getValue() const {
    return value;
}

int MyString::Length() const {
    return value.length();
}

int MyString::CountConsonants() const {
    std::string consonant = "bcdfghjklmnpqrstvwxyzбвгґджзйклмнпрстфхцчшщBCDFGHJKLMNPQRSTVWXYZБВГҐДЖЗЙКЛМНПРСТФХЦЧШЩ";
    int count = 0;

    for (int i = 0; i < value.length(); i++) {
        char c = value[i];
        for (int j = 0; j < consonant.length(); j++) {
            if (c == consonant[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

void MyString::ReplaceManySpacesWithOne() {
    std::string result = "";
    for (int i = 0; i < value.length(); i++) {
        if (value[i] != ' ' || (i > 0 && value[i - 1] != ' ')) {
            result += value[i];
        }
    }
    value = result;
}

void MyString::ClearEdges() {
    if (value.length() == 0) return;

    int start = 0;
    while (start < value.length() && value[start] == ' ') {
        start++;
    }

    int end = value.length() - 1;
    while (end >= start && value[end] == ' ') {
        end--;
    }

    std::string result = "";
    for (int i = start; i <= end; i++) {
        result += value[i];
    }
    value = result;
}