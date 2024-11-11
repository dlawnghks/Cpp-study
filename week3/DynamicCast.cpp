#include <iostream>
using namespace std;

class Animal {
public:
	virtual void cry() = 0;  // 추상클래스(인터페이스)
	//void cry() {
	//	cout << "동물은 울음소리를 냅니다\n";
	//}
};
class Dog : public Animal{
public:
	void cry() {
		cout << "멍멍!\n";
	}
};
class Cat : public Animal {
public:
	void cry() {
		cout << "냐옹~\n";
	}
};
int main()
{	
	//Animal a;// 추상클래스의 인스턴스 생성 불가
	
	//Dog* d = new Dog();
	//Animal* d = new Dog();
	Animal* a = new Dog(); // upcasting
	//Dog* d = (Dog*)a; // Old style (C style), downcasting
	//Dog* d = dynamic_cast<Dog*>(a); // Modern style (C++11), downcasting

	//Cat* d = (Cat*)a; // Old style (C style), downcasting
	//Dog* d = (Dog*)a; // Old style (C style), downcasting
	
	//Cat* d = dynamic_cast<Cat*>(a); // Modern style (C++11), downcasting
	Dog* d = dynamic_cast<Dog*>(a); // Modern style (C++11), downcasting

	cout << a << " / " << d << '\n';
	d->cry();
	
	return 0;
}


/*
double db = 3.91;
cout << db << '\n';
//cout << (int)db << '\n'; // Old style (C style)
cout << static_cast<int>(db) << '\n'; // Modern style (C++11)
*/