/**************************************************************
 * SP 클래스의 인터페이스 파일                                *
 **************************************************************/
#ifndef SP_H
#define SP_H
#include <iostream>
using namespace std;

// SP 클래스의 정의
class SP
{
  private: 
    int* ptr;  // 힙메모리 주소 받을 용도
  public:
    SP(int* ptr);
    ~SP(); 
    int& operator*() const;
    int* operator->() const;
};
#endif