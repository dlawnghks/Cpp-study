#include <iostream>
using namespace std;

class Complex { // ���Ҽ� Ŭ����
private:
	int real;  // �Ǽ���
	int imaginary;  // �����
	friend ostream& operator<<(ostream& left, Complex& right);
public:
	Complex(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
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
	Complex operator+(Complex right){  // ���ϱ� ����
		int r = this->getReal() + right.real;  // getter ��� ���� access ���� (���� class ����)
		int i = this->imaginary + right.getImaginary();

		return Complex(r, i);
	}
	//friend ostream& operator<<(ostream& left, Complex& right) {
	//	left << right.real;
	//	if (right.imaginary >= 0) {  // ����ΰ� �����
	//		left << "+" << right.imaginary << "i\n";
	//	}
	//	else {  // ����ΰ� ������
	//		left << right.imaginary << "i\n";
	//	}
	//	return left;
	//}
};
ostream& operator<<(ostream& left, Complex& right) {
	left << right.real;
	if (right.imaginary >= 0) {  // ����ΰ� �����
		left << "+" << right.imaginary << "i\n";
	}
	else {  // ����ΰ� ������
		left << right.imaginary << "i\n";
	}
	return left;
}
int main() {
	Complex c1(10, 9);
	//Complex c2 = ++c1; // ����
	Complex c2 = c1++; // ����
	Complex c3(5, -99);
	cout << c2; //cout << c2.real << "+" << c2.imaginary << "i\n";	
	//operator<<(cout, c3);  // cout << c3; 
	Complex c4 = c1.operator+(c3);  //Complex c4 = c1 + c3;
	cout << c4;

	return 0;
}


