#include <iostream>
using namespace std;

class Flyable {  // 모든 멤버함수가 순수 가상함수면 Interface
public:
	virtual void fly() = 0;  // 순수 가상함수
	Flyable(){}
	virtual ~Flyable() {}
};
class Pokemon {
public:
	Flyable* flyable;  // has-a

	Pokemon() {}

	Pokemon(Flyable* f) {
		this->flyable = f;
		cout << this << " : 포켓몬 클래스의 매개변수 생성자\n";
	}
	virtual ~Pokemon() {
		cout << this << " : 포켓몬 클래스의 소멸자!\n";
		//delete this->flyable;
		//this->flyable = nullptr;
	}
	void performFly() {
		flyable->fly();
	}

	virtual void attack() {
		cout << "포켓몬 공격!\n";
	}
};
class Pikachu : public Pokemon {
public:
	Pikachu() {}

	Pikachu(Flyable* f) {
		this->flyable = f;
		cout << this << " : 피카츄 클래스의 매개변수 생성자\n";
	}
	~Pikachu() {
		cout << this << " : 피카츄 클래스의 소멸자!\n";
		delete this->flyable;
		//this->flyable = nullptr;
	}
	void attack() {
		cout << "전기 공격!\n";
	}
};

class Wings : public Flyable {
public:
	Wings() {
		cout << this << " : Wings 클래스의 기본 생성자\n";
	}
	~Wings() {
		cout << this << " : Wings 클래스의 소멸자!\n";
	}
	void fly() {
		cout << "날개를 펼쳐 날아갑니다~\n";
	}
};
class JetPack : public Flyable {
public:
	JetPack() {
		cout << this << " : JetPack 클래스의 기본 생성자\n";
	}
	~JetPack() {
		cout << this << " : JetPack 클래스의 소멸자!\n";
	}
	void fly() {
		cout << "제트팩 추진기로 날아갑니다!\n";
	}
};
int main() {
	JetPack* jetPack = new JetPack();

	Pikachu* pikachu1 = new Pikachu(new Wings());  // 힙 메모리에 할당된 new Wings() 객체의 메모리 누수 현상
	pikachu1->attack();

	delete pikachu1;
	pikachu1 = nullptr;

	Pokemon* pikachu2 = new Pikachu(jetPack);
	pikachu2->performFly();
	pikachu2->attack();

	delete pikachu2;
	pikachu2 = nullptr;

	delete jetPack;
	jetPack = nullptr;

	return 0;
}