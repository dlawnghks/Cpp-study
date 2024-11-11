#include <iostream>
using namespace std;

class Animal {
public:
	virtual void cry() = 0;  // �߻�Ŭ����(�������̽�)
	//void cry() {
	//	cout << "������ �����Ҹ��� ���ϴ�\n";
	//}
};
class Dog : public Animal{
public:
	void cry() {
		cout << "�۸�!\n";
	}
};
class Cat : public Animal {
public:
	void cry() {
		cout << "�Ŀ�~\n";
	}
};
int main()
{	
	//Animal a;// �߻�Ŭ������ �ν��Ͻ� ���� �Ұ�
	
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