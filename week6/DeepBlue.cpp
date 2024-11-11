#include <iostream>
#include <string>
using namespace std;

class Complex { // ���Ҽ� Ŭ����
private:
	int real;  // �Ǽ���
	int imaginary;  // �����
	friend ostream& operator<<(ostream& left, Complex& right);
public:
	Complex() : real(0), imaginary(0) {
	}
	//Complex(int real, int imaginary) {
	//	this->real = real;
	//	this->imaginary = imaginary;
	//}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
	}
	int getReal() const {
		return real;
	}
	int getImaginary() const {
		return imaginary;
	}
	Complex operator++() { // ���� ����
		//return Complex(++this->real, this->imaginary);
		this->real = this->real + 1;
		return Complex(this->real, this->imaginary);
	}
	Complex operator++(int) { // ���� ����
		Complex backup(this->real, this->imaginary);
		this->real++; //this->real = this->real + 1;
		return backup;
	}
	Complex operator+(Complex right) {  // ���ϱ� ����
		int r = this->getReal() + right.real;  // getter ��� ���� access ���� (���� class ����)
		int i = this->imaginary + right.getImaginary();

		return Complex(r, i);
	}
	friend ostream& operator<<(ostream& out, Complex& right) {
		out << right.real;
		if (right.imaginary >= 0) {  // ����ΰ� �����
			out << "+" << right.imaginary << "i\n";
		}
		else {  // ����ΰ� ������
			out << right.imaginary << "i\n";
		}
		return out;
	}
	//friend istream& operator>>(istream& in, Complex& right) {
	//	cout << "�Ǽ��ο� ����θ� �Է�(ex:10 9) : ";
	//	in >> right.real >> right.imaginary;
	//	return in;
	//}
	friend istream& operator>>(istream& in, Complex& right) {
		cout << "�Ǽ��ο� ����θ� �Է�(ex:109+9i) : ";
		string input;
		in >> input;

		int plusIndex = input.find('+');
		int imaginaryIndex = input.find('i');

		if (plusIndex != string::npos && imaginaryIndex != string::npos && imaginaryIndex > plusIndex) {  // ������ �´� �Է��̸�
			// +��ȣ�� �����ϸ鼭 ���ÿ� i��ȣ�� �����ϰ� �� ���ÿ� i��ȣ�� ��ġ�� +��ȣ�� ��ġ���� ũ�� True
			right.real = stoi(input.substr(0, plusIndex));  // +��ȣ �ձ��� ���ڿ� ���� �� ������ ��ȯ
			right.imaginary = stoi(input.substr(plusIndex+1, imaginaryIndex - plusIndex - 1));  // +��ȣ�� i��ȣ ������ ���ڿ� ���� �� ������ ��ȯ
		}
		else {
			cout << "�Է� ������ �ùٸ��� �ʽ��ϴ�!\n";
			right.real = 0;
			right.imaginary = 0;
		}
		return in;
	}
};

int main() {
	Complex c0;
	cin >> c0;
	cout << c0;



	/*
	Complex c1(10, 9);
	//Complex c2 = ++c1; // ����
	Complex c2 = c1++; // ����
	Complex c3(5, -99);
	cout << c2; //cout << c2.real << "+" << c2.imaginary << "i\n";	
	//operator<<(cout, c3);  // cout << c3; 
	Complex c4 = c1.operator+(c3);  //Complex c4 = c1 + c3;
	cout << c4;
	*/
	return 0;
}
