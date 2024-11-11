#include "complex.h"

Complex::Complex() : real(0), imaginary(0)
{
}

Complex::Complex(int real, int imaginary) : real(real), imaginary(imaginary)
{
}

int Complex::getReal() const
{
	return real;
}

int Complex::getImaginary() const
{
	return imaginary;
}

Complex Complex::operator++()
{ // 전위 연산
	   //return Complex(++this->real, this->imaginary);
	this->real = this->real + 1;
	return Complex(this->real, this->imaginary);
}

Complex Complex::operator++(int)
{ // 후위 연산
	Complex backup(this->real, this->imaginary);
	this->real++; //this->real = this->real + 1;
	return backup;
}

Complex Complex::operator+(Complex right)
{  // 더하기 연산
	int r = this->getReal() + right.real;  // getter 대신 직접 access 가능 (같은 class 안쪽)
	int i = this->imaginary + right.getImaginary();

	return Complex(r, i);
}

Complex Complex::operator*(Complex right)
{
	//return Complex(this->real * right.real, this->imaginary * right.imaginary);
	return Complex(real * right.real, imaginary * right.imaginary);
}

ostream& operator<<(ostream& out, Complex& right)
{
	out << right.real;
	if (right.imaginary >= 0) {  // 허수부가 양수면
		out << "+" << right.imaginary << "i\n";
	}
	else {  // 허수부가 음수면
		out << right.imaginary << "i\n";
	}
	return out;
}

istream& operator>>(istream& in, Complex& right)
{
	cout << "실수부와 허수부를 입력(ex:109+9i) : ";
	string input;
	in >> input;

	int plusIndex = input.find('+');
	int imaginaryIndex = input.find('i');

	if (plusIndex != string::npos && imaginaryIndex != string::npos && imaginaryIndex > plusIndex) {  // 문법에 맞는 입력이면
		// +기호가 존재하면서 동시에 i기호도 존재하고 또 동시에 i기호의 위치가 +기호의 위치보다 크면 True
		right.real = stoi(input.substr(0, plusIndex));  // +기호 앞까지 문자열 추출 후 정수로 변환
		right.imaginary = stoi(input.substr(plusIndex + 1, imaginaryIndex - plusIndex - 1));  // +기호와 i기호 사이의 문자열 추출 후 정수로 변환
	}
	else {
		cout << "입력 포맷이 올바르지 않습니다!\n";
		right.real = 0;
		right.imaginary = 0;
	}
	return in;
}