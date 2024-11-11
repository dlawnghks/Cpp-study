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
{ // ���� ����
	   //return Complex(++this->real, this->imaginary);
	this->real = this->real + 1;
	return Complex(this->real, this->imaginary);
}

Complex Complex::operator++(int)
{ // ���� ����
	Complex backup(this->real, this->imaginary);
	this->real++; //this->real = this->real + 1;
	return backup;
}

Complex Complex::operator+(Complex right)
{  // ���ϱ� ����
	int r = this->getReal() + right.real;  // getter ��� ���� access ���� (���� class ����)
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
	if (right.imaginary >= 0) {  // ����ΰ� �����
		out << "+" << right.imaginary << "i\n";
	}
	else {  // ����ΰ� ������
		out << right.imaginary << "i\n";
	}
	return out;
}

istream& operator>>(istream& in, Complex& right)
{
	cout << "�Ǽ��ο� ����θ� �Է�(ex:109+9i) : ";
	string input;
	in >> input;

	int plusIndex = input.find('+');
	int imaginaryIndex = input.find('i');

	if (plusIndex != string::npos && imaginaryIndex != string::npos && imaginaryIndex > plusIndex) {  // ������ �´� �Է��̸�
		// +��ȣ�� �����ϸ鼭 ���ÿ� i��ȣ�� �����ϰ� �� ���ÿ� i��ȣ�� ��ġ�� +��ȣ�� ��ġ���� ũ�� True
		right.real = stoi(input.substr(0, plusIndex));  // +��ȣ �ձ��� ���ڿ� ���� �� ������ ��ȯ
		right.imaginary = stoi(input.substr(plusIndex + 1, imaginaryIndex - plusIndex - 1));  // +��ȣ�� i��ȣ ������ ���ڿ� ���� �� ������ ��ȯ
	}
	else {
		cout << "�Է� ������ �ùٸ��� �ʽ��ϴ�!\n";
		right.real = 0;
		right.imaginary = 0;
	}
	return in;
}