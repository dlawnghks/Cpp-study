#include <iostream>
using namespace std;

class Complex { // 복소수 클래스
private:
	int real;  // 실수부
	int imaginary;  // 허수부
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
	Complex operator++() { // 전위 연산
		//return Complex(++this->real, this->imaginary);
		this->real = this->real + 1;
		return Complex(this->real, this->imaginary);
	}
	Complex operator++(int) { // 후위 연산
		Complex backup(this->real, this->imaginary);
		this->real++; //this->real = this->real + 1;
		return backup;
	}
	Complex operator+(Complex right){  // 더하기 연산
		int r = this->getReal() + right.real;  // getter 대신 직접 access 가능 (같은 class 안쪽)
		int i = this->imaginary + right.getImaginary();

		return Complex(r, i);
	}
	//friend ostream& operator<<(ostream& left, Complex& right) {
	//	left << right.real;
	//	if (right.imaginary >= 0) {  // 허수부가 양수면
	//		left << "+" << right.imaginary << "i\n";
	//	}
	//	else {  // 허수부가 음수면
	//		left << right.imaginary << "i\n";
	//	}
	//	return left;
	//}
};
ostream& operator<<(ostream& left, Complex& right) {
	left << right.real;
	if (right.imaginary >= 0) {  // 허수부가 양수면
		left << "+" << right.imaginary << "i\n";
	}
	else {  // 허수부가 음수면
		left << right.imaginary << "i\n";
	}
	return left;
}
int main() {
	Complex c1(10, 9);
	//Complex c2 = ++c1; // 전위
	Complex c2 = c1++; // 후위
	Complex c3(5, -99);
	cout << c2; //cout << c2.real << "+" << c2.imaginary << "i\n";	
	//operator<<(cout, c3);  // cout << c3; 
	Complex c4 = c1.operator+(c3);  //Complex c4 = c1 + c3;
	cout << c4;

	return 0;
}


