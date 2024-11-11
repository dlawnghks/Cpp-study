#pragma once
#include <string>
using namespace std;

class MyException {
private:
	//string errorMessage;  // �����޼���
	const char* errorMessage;  // �����޼���
	int errorCode; // �����ڵ�
	const void* errorAddress;  // �޸� �ּ�

public:
	//MyException(int code, string& message, int* address);
	MyException(int code, const char* message, const void* address);
	int getErrorCode() const;
	const void* getAddress() const;
	const char* getErrorMessage() const;
};