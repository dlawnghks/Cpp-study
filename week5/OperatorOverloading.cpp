//#include <iostream>
//using namespace std;
//
//class Complex { // ���Ҽ� Ŭ����
//private:  // �ʵ�� ĸ��ȭ
//	int real;  // �Ǽ���
//	int imaginary;  // �����
//
//public:
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//
//	// getter �����
//	int getReal() const;
//	int getImaginary() const;
//
//	// ������ �����ε� �����(��� �Լ�)	
//	Complex operator++();// ���� ����	
//	Complex operator++(int);// ���� ����
//	//Complex operator+(Complex right);  // ���ϱ� ����
//};
//// getter ����Լ� ���� �ڵ�
//int Complex::getReal() const {
//		return real;
//}
//int Complex::getImaginary() const {
//	return imaginary;
//}
//Complex Complex::operator++() { // ���� ����
//	//return Complex(++this->real, this->imaginary);
//	this->real = this->real + 1;
//	return Complex(this->real, this->imaginary);
//}
//Complex Complex::operator++(int) { // ���� ����
//	Complex backup(this->real, this->imaginary);
//	this->real++; //this->real = this->real + 1;
//	return backup;
//}
////Complex Complex::operator+(Complex right) {
////	int r = this->real + right.real;
////	int i = this->imaginary + right.imaginary;
////
////	return Complex(r, i);
////}
//
//
//// ���� ������ �����ε� �Լ� ����
//ostream& operator<<(ostream& left, Complex& right) {
//	//left << right.real << "+" << right.imaginary << "i\n";
//	//left << right.real;
//	left << right.getReal();
//	if (right.getImaginary() >= 0) {  // �Ǽ��ΰ� �����
//		left << "+" << right.getImaginary() << "i\n";
//	}
//	else {  // �Ǽ��ΰ� ������
//		left << right.getImaginary() << "i\n";
//	}
//	return left;
//}
//
//Complex operator+ (Complex left, Complex right) {
//	int r = left.getReal() + right.getReal();
//	int i = left.getImaginary() + right.getImaginary();
//	
//	return Complex(r, i);
//}
//
//int main() {
//	Complex c1(10, 9);
//	//Complex c2 = ++c1; // ����
//	Complex c2 = c1++; // ����
//	Complex c3(5, -99);
//	cout << c2; //cout << c2.real << "+" << c2.imaginary << "i\n";	
//	operator<<(cout, c3);  // cout << c3; 
//	Complex c4 = c1 + c3;
//	cout << c4;
//
//	return 0;
//}
//
//
