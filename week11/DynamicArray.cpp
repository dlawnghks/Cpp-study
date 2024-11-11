#include "DynamicArray.h"
#include "MyException.h"

DynamicArray::DynamicArray()
{
}

//DynamicArray::DynamicArray(int size) : size(size)
//{
//	ptr = new int[size];
//	cout << "����\n";
//	throw "������ ���ʿ��� ���ܹ߻�!\n";  // main�Լ� try �������� ��ü �����ڵ带 �ű�
//	cout << "����\n"; // �� �ڵ�� ������ ���� �ʾҰ� ������ �ڵ尡 ������ ���� �ʾ�
//	// �޸� ������ �߻�
//}


//DynamicArray::DynamicArray(int size) : size(size)
//{
//	try {
//		ptr = new int[size];
//		//throw "������ ���ʿ��� ���ܹ߻�!\n";
//		//throw 4885;
//		throw MyException(4885, "�޸� ����", this);
//		cout << "����1\n";  // �� �ڵ�� ���� �ȵ�
//	}
//	//catch (const char* error) {
//		//cout << error;
//	catch (...) {
//		cout << "������ catch���� ����\n";
//		throw;  // ȣ���� �����Լ��� try~catch�������� MyException��ü�� �佺
//	}
//	cout << "����2\n";  // �� �ڵ�� ������� �ʰ� ������ �ڵ尡 ������ �ȵ�. �޸� ����
//}

// traditional try~catch ����� ����� ������
//DynamicArray::DynamicArray(int size) : size(size)
//{
//	try {
//		ptr = new int[size];
//		//throw "������ ���ʿ��� ���ܹ߻�!\n";
//		//throw 4885;
//		throw MyException(4885, "�޸� ����", this);
//		cout << "����1\n";  // �� �ڵ�� ���� �ȵ�
//	}
//	//catch (const char* error) {
//		//cout << error;
//	catch (...) {
//		delete ptr;  // �޸� ���� �ذ�
//		ptr = nullptr;
//		cout << "������ catch���� ����\n";
//		throw;  // ȣ���� �����Լ��� try~catch�������� MyException��ü�� �佺
//	}
//	cout << "����2\n";  // �� �ڵ�� ������� �ʰ� ������ �ڵ尡 ������ �ȵ�. �޸� ���� �ذ�
//}


DynamicArray::DynamicArray(int size) try : size(size)
{
	ptr = new int[size];
	//throw "������ ���ʿ��� ���ܹ߻�!\n";
	//throw 4885;
	//throw MyException(4885, "�޸� ����", this);
	cout << "���������� ��ü ���� �Ϸ�\n";  
}
catch (...) {
	delete ptr;  // �޸� ���� �ذ�
	ptr = nullptr;
	cout << "������ catch���� ����\n";
	throw;  // ȣ���� �����Լ��� try~catch�������� MyException��ü�� �佺
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
