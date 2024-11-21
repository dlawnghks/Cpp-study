#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <cassert>
using namespace std;

// Generic class
template <typename T>
class Stack
{
  private:
    T* ptr;
    int capacity;
    int size;
  public:
    Stack(int capacity);
    ~Stack();
    void push(const T& element);
    T pop();
    int getSize();
};
#endif