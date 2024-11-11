#pragma once
#include <string>
using namespace std;

class MyException {
private:
	//string errorMessage;  // 에러메세지
	const char* errorMessage;  // 에러메세지
	int errorCode; // 에러코드
	const void* errorAddress;  // 메모리 주소

public:
	//MyException(int code, string& message, int* address);
	MyException(int code, const char* message, const void* address);
	int getErrorCode() const;
	const void* getAddress() const;
	const char* getErrorMessage() const;
};