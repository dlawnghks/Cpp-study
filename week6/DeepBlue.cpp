#include <iostream>
#include <string>
using namespace std;

class Complex { // 복소수 클래스
private:
	int real;  // 실수부
	int imaginary;  // 허수부
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
	Complex operator+(Complex right) {  // 더하기 연산
		int r = this->getReal() + right.real;  // getter 대신 직접 access 가능 (같은 class 안쪽)
		int i = this->imaginary + right.getImaginary();

		return Complex(r, i);
	}
	friend ostream& operator<<(ostream& out, Complex& right) {
		out << right.real;
		if (right.imaginary >= 0) {  // 허수부가 양수면
			out << "+" << right.imaginary << "i\n";
		}
		else {  // 허수부가 음수면
			out << right.imaginary << "i\n";
		}
		return out;
	}
	//friend istream& operator>>(istream& in, Complex& right) {
	//	cout << "실수부와 허수부를 입력(ex:10 9) : ";
	//	in >> right.real >> right.imaginary;
	//	return in;
	//}
	friend istream& operator>>(istream& in, Complex& right) {
		cout << "실수부와 허수부를 입력(ex:109+9i) : ";
		string input;
		in >> input;

		int plusIndex = input.find('+');
		int imaginaryIndex = input.find('i');

		if (plusIndex != string::npos && imaginaryIndex != string::npos && imaginaryIndex > plusIndex) {  // 문법에 맞는 입력이면
			// +기호가 존재하면서 동시에 i기호도 존재하고 또 동시에 i기호의 위치가 +기호의 위치보다 크면 True
			right.real = stoi(input.substr(0, plusIndex));  // +기호 앞까지 문자열 추출 후 정수로 변환
			right.imaginary = stoi(input.substr(plusIndex+1, imaginaryIndex - plusIndex - 1));  // +기호와 i기호 사이의 문자열 추출 후 정수로 변환
		}
		else {
			cout << "입력 포맷이 올바르지 않습니다!\n";
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
	//Complex c2 = ++c1; // 전위
	Complex c2 = c1++; // 후위
	Complex c3(5, -99);
	cout << c2; //cout << c2.real << "+" << c2.imaginary << "i\n";	
	//operator<<(cout, c3);  // cout << c3; 
	Complex c4 = c1.operator+(c3);  //Complex c4 = c1 + c3;
	cout << c4;
	*/
	return 0;
}
