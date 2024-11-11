#pragma once
#include <iostream>
#include <string>
using namespace std;

class Complex { // 복소수 클래스
private:
	int real;  // 실수부
	int imaginary;  // 허수부
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