#include "DynamicArray.h"
#include "MyException.h"

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) : size(size)
{
	ptr = new int[size];
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
