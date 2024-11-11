#include "DynamicArray.h"

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
		throw 4885;
	ptr[position] = value;
}

int DynamicArray::getAt(int position)
{
	if (position < 0 || position >= size)
		throw 4885;
	return ptr[position];
}
