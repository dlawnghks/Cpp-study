#include <iostream>
using namespace std;

class Complex { // ���Ҽ� Ŭ����
public:
	int real;  // �Ǽ���
	int imaginary;  // �����

	Complex(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}

	// ���� ����
	Complex operator++() {
		//return Complex(++this->real, this->imaginary);
		this->real = this->real + 1;
		return Complex(this->real, this->imaginary);
	}
	// ���� ����
	Complex operator++(int) {
		Complex backup(this->real, this->imaginary);
		this->real++; //this->real = this->real + 1;
		return backup;
	}
};

int main() {
	//int a = 10;
	//cout << a++ << '\n';
	//cout << a++ << '\n';
	//cout << ++a << '\n';

	Complex c1(10, 9);
	//Complex c2 = ++c1; // ����
	Complex c2 = c1++; // ����
	cout << c2.real << "+" << c2.imaginary << "i\n";

	return 0;
}


//#include <iostream>
//using namespace std;
//
//class Complex { // ���Ҽ� Ŭ����
//public:
//	int real;  // �Ǽ���
//	int imaginary;  // �����
//
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//};
//
//Complex operator+ (const Complex& left, const Complex& right) {  // ���ɰ���(���۷���), �б� ����(const)
//	//left.real = 100;  // ���� �� ���� �Ұ�
//	int r = left.real + right.real;
//	int i = left.imaginary + right.imaginary;
//
//	return Complex(r, i);
//}
//
//int main() {
//	Complex c1(10, 9);
//	Complex c2(-7, 1);
//	cout << c1.imaginary << '\n';
//
//	//Complex c3 = c1 + c2; 
//	Complex c3 = operator+(c1, c2);
//	cout << c3.real << "+" << c3.imaginary << "i\n";
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Complex { // ���Ҽ� Ŭ����
//public:
//	int real;  // �Ǽ���
//	int imaginary;  // �����
//
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//};
//// ������ �����ε� (�Ϲ��Լ�)
//Complex operator+ (Complex left, Complex right) {
//	int r = left.real + right.real;
//	int i = left.imaginary + right.imaginary;
//	
//	return Complex(r, i);
//}
//
//int main() {
//	Complex c1(10, 9);
//	Complex c2(-7, 1);
//	cout << c1.imaginary << '\n';
//
//	//Complex c3 = c1 + c2; 
//	Complex c3 = operator+(c1, c2);	
//	cout << c3.real << "+" << c3.imaginary << "i\n";
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Complex { // ���Ҽ� Ŭ����
//public:
//	int real;  // �Ǽ���
//	int imaginary;  // �����
//
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//
//// ������ �����ε� (����Լ�)
//	Complex operator+(Complex right) {
//		int r = this->real + right.real;
//		int i = this->imaginary + right.imaginary;
//
//		return Complex(r, i);
//	}
//};
//int main() {
//	Complex c1(10, 9);
//	Complex c2(-7, 1);
//	cout << c1.imaginary << '\n';
//
//	// ���Ҽ� ���ϱ�. ���Ҽ��� ���Ϸ���, �Ǽ� �κа� ��� �κ��� ���� ���ϱ⸸ �ϸ� �˴ϴ�.
//	Complex c3 = c1 + c2; //Complex c3 = c1.operator+(c2);
//	cout << c3.real << "+" << c3.imaginary << "i\n";
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Pokemon {
//};
//int main() {
//	int i = 3 + 7;
//	cout << i << endl;
//
//	Pokemon p1, p2;
//	Pokemon p3 = p1 + p2;
//
//	return 0;
//}
