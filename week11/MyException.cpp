#include "MyException.h"

//MyException::MyException(int code, string message, int* address)
MyException::MyException(int code, const char* message, const void* address)
	: errorCode(code), errorMessage(message), errorAddress(address)
{
}

int MyException::getErrorCode() const
{
		return errorCode;
}

const void* MyException::getAddress() const
{
	return errorAddress;
}


const char* MyException::getErrorMessage() const
{
	return errorMessage;
}


 