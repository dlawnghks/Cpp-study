//#include <iostream>
//using namespace std;
//
//class Complex { // 복소수 클래스
//private:  // 필드들 캡슐화
//	int real;  // 실수부
//	int imaginary;  // 허수부
//
//public:
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//
//	// getter 선언부
//	int getReal() const;
//	int getImaginary() const;
//
//	// 연산자 오버로딩 선언부(멤버 함수)	
//	Complex operator++();// 전위 연산	
//	Complex operator++(int);// 후위 연산
//	//Complex operator+(Complex right);  // 더하기 연산
//};
//// getter 멤버함수 구현 코드
//int Complex::getReal() const {
//		return real;
//}
//int Complex::getImaginary() const {
//	return imaginary;
//}
//Complex Complex::operator++() { // 전위 연산
//	//return Complex(++this->real, this->imaginary);
//	this->real = this->real + 1;
//	return Complex(this->real, this->imaginary);
//}
//Complex Complex::operator++(int) { // 후위 연산
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
//// 비멤버 연산자 오버로딩 함수 구현
//ostream& operator<<(ostream& left, Complex& right) {
//	//left << right.real << "+" << right.imaginary << "i\n";
//	//left << right.real;
//	left << right.getReal();
//	if (right.getImaginary() >= 0) {  // 실수부가 양수면
//		left << "+" << right.getImaginary() << "i\n";
//	}
//	else {  // 실수부가 음수면
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
//	//Complex c2 = ++c1; // 전위
//	Complex c2 = c1++; // 후위
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
