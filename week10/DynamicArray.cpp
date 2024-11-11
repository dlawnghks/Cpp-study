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
		//throw std::string("�Ҵ� ���� : �ε����� ������ ������ϴ�\n");
		throw MyException(4886, "�ε����� ������ ������ϴ� (�Ҵ� ����)", this);
	ptr[position] = value;
}

int DynamicArray::getAt(int position)
{
	if (position < 0 || position >= size)
		//throw 4885;
		//throw "�׼��� ���� : �ε����� ������ ������ϴ�\n";
		//throw std::string("�׼��� ���� : �ε����� ������ ������ϴ�\n");
		//throw MyException(4885, "�׼��� ���� : �ε����� ������ ������ϴ�\n");
		throw MyException(4885, "�ε����� ������ ������ϴ� (�׼��� ����)", this);
		
	return ptr[position];
}
