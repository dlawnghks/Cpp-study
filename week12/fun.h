#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Fun
{
private:
    T data;
public:
    Fun(T data);
    ~Fun();
    T get() const;
    void set(T data);
};