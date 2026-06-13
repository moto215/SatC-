#pragma once

#include <iostream>
#include <format>


class MyClass
{
public:
    ~MyClass();
public:
    void setValue(int value) 
    {
        value_ = value;
    }

private:
    int value_{};
};

MyClass* instantiateMyClass(const int size);

void destroyMyClass(MyClass*& obj);