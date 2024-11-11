/**************************************************************
 * Integer 클래스의 구현 파일                                 *
 **************************************************************/
#include "integer.h"

// function-try 블록을 사용한 생성자
Integer::Integer(int v)
try: sp(new int)  
{
  *sp = v;
  throw 4885;  // 강제 예외 발생
}
catch(...)
{
  // 힙메모리 해제 불필요함. 스마트포인터 클래스에서 처리
  cout << "Integer 클래스 생성자 안쪽 오류\n";
  throw;
}

// traditional try~catch 블록을 사용한 생성자
//Integer::Integer(int v) : sp(new int) {
//	try {
//		*sp = v;
//		throw 4885;  // 강제 예외 발생
//	}
//	catch (...)
//	{
//		// 힙메모리 해제 불필요함. 스마트포인터 클래스에서 처리
//		cout << "Integer 클래스 생성자 안쪽 오류\n";
//		throw;
//	}
//}



// 소멸자 
Integer::~Integer()
{
}
// 접근자 함수
int Integer::getValue()
{
  return *sp;
}