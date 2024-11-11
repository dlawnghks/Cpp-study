#pragma once
#include <string>
class DynamicArray {
public:
	int size;
	int* ptr;

	DynamicArray();
	DynamicArray(int size);
	virtual ~DynamicArray();

	void setAt(int position, int value);
	//int setAt(int position, int value);
	int getAt(int position);
};
