#include "DynamicArray.h"
#include "MyException.h"

DynamicArray::DynamicArray()
{
}

//DynamicArray::DynamicArray(int size) : size(size)
//{
//	ptr = new int[size];
//	cout << "이전\n";
//	throw "생성자 안쪽에서 예외발생!\n";  // main함수 try 안쪽으로 객체 생성코드를 옮김
//	cout << "이후\n"; // 이 코드는 실행이 되지 않았고 생성자 코드가 마무리 되지 않아
//	// 메모리 누수가 발생
//}


//DynamicArray::DynamicArray(int size) : size(size)
//{
//	try {
//		ptr = new int[size];
//		//throw "생성자 안쪽에서 예외발생!\n";
//		//throw 4885;
//		throw MyException(4885, "메모리 오류", this);
//		cout << "이후1\n";  // 이 코드는 실행 안됨
//	}
//	//catch (const char* error) {
//		//cout << error;
//	catch (...) {
//		cout << "생성자 catch구문 동작\n";
//		throw;  // 호출한 메인함수의 try~catch구문으로 MyException객체를 토스
//	}
//	cout << "이후2\n";  // 이 코드는 실행되지 않고 생성자 코드가 마무리 안됨. 메모리 누수
//}

// traditional try~catch 블록을 사용한 생성자
//DynamicArray::DynamicArray(int size) : size(size)
//{
//	try {
//		ptr = new int[size];
//		//throw "생성자 안쪽에서 예외발생!\n";
//		//throw 4885;
//		throw MyException(4885, "메모리 오류", this);
//		cout << "이후1\n";  // 이 코드는 실행 안됨
//	}
//	//catch (const char* error) {
//		//cout << error;
//	catch (...) {
//		delete ptr;  // 메모리 누수 해결
//		ptr = nullptr;
//		cout << "생성자 catch구문 동작\n";
//		throw;  // 호출한 메인함수의 try~catch구문으로 MyException객체를 토스
//	}
//	cout << "이후2\n";  // 이 코드는 실행되지 않고 생성자 코드가 마무리 안됨. 메모리 누수 해결
//}


DynamicArray::DynamicArray(int size) try : size(size)
{
	ptr = new int[size];
	//throw "생성자 안쪽에서 예외발생!\n";
	//throw 4885;
	//throw MyException(4885, "메모리 오류", this);
	cout << "정상적으로 객체 생성 완료\n";  
}
catch (...) {
	delete ptr;  // 메모리 누수 해결
	ptr = nullptr;
	cout << "생성자 catch구문 동작\n";
	throw;  // 호출한 메인함수의 try~catch구문으로 MyException객체를 토스
}



DynamicArray::~DynamicArray()
{
	delete ptr;
	ptr = nullptr;
}

//int DynamicArray::setAt(int position, int value)
//{
//	if (position < 0 || position >= size)
//		return -1;
//	ptr[position] = value;
//	return 1;
//}

void DynamicArray::setAt(int position, int value)
{
	if (position < 0 || position >= size)
		//throw 4885;
		//throw std::string("할당 오류 : 인덱스의 범위를 벗어났습니다\n");
		throw MyException(4886, "인덱스의 범위를 벗어났습니다 (할당 오류)", this);
	ptr[position] = value;
}

int DynamicArray::getAt(int position)
{
	if (position < 0 || position >= size)
		//throw 4885;
		//throw "액세스 오류 : 인덱스의 범위를 벗어났습니다\n";
		//throw std::string("액세스 오류 : 인덱스의 범위를 벗어났습니다\n");
		//throw MyException(4885, "액세스 오류 : 인덱스의 범위를 벗어났습니다\n");
		throw MyException(4885, "인덱스의 범위를 벗어났습니다 (액세스 오류)", this);
		
	return ptr[position];
}
