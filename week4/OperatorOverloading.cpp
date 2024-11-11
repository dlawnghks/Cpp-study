#include <iostream>
using namespace std;

class Complex { // 복소수 클래스
public:
	int real;  // 실수부
	int imaginary;  // 허수부

	Complex(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}

	// 전위 연산
	Complex operator++() {
		//return Complex(++this->real, this->imaginary);
		this->real = this->real + 1;
		return Complex(this->real, this->imaginary);
	}
	// 후위 연산
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
	//Complex c2 = ++c1; // 전위
	Complex c2 = c1++; // 후위
	cout << c2.real << "+" << c2.imaginary << "i\n";

	return 0;
}


//#include <iostream>
//using namespace std;
//
//class Complex { // 복소수 클래스
//public:
//	int real;  // 실수부
//	int imaginary;  // 허수부
//
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//};
//
//Complex operator+ (const Complex& left, const Complex& right) {  // 성능개선(레퍼런스), 읽기 전용(const)
//	//left.real = 100;  // 원본 값 변경 불가
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
//class Complex { // 복소수 클래스
//public:
//	int real;  // 실수부
//	int imaginary;  // 허수부
//
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//};
//// 연산자 오버로딩 (일반함수)
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
//class Complex { // 복소수 클래스
//public:
//	int real;  // 실수부
//	int imaginary;  // 허수부
//
//	Complex(int real, int imaginary) {
//		this->real = real;
//		this->imaginary = imaginary;
//	}
//
//// 연산자 오버로딩 (멤버함수)
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
//	// 복소수 더하기. 복소수를 더하려면, 실수 부분과 허수 부분을 각자 더하기만 하면 됩니다.
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
