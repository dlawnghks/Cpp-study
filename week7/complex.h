#pragma once
#include <iostream>
#include <string>
using namespace std;

class Complex { // ���Ҽ� Ŭ����
private:
	int real;  // �Ǽ���
	int imaginary;  // �����
public:
	Complex();
	Complex(int real, int imaginary);
	int getReal() const;
	int getImaginary() const;
	Complex operator++();
	Complex operator++(int);
	Complex operator+(Complex right);
	Complex operator*(Complex right);
	friend ostream& operator<<(ostream& out, Complex& right);
	friend istream& operator>>(istream& in, Complex& right);
};