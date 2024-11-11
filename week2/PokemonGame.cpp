#include <iostream>
using namespace std;

class Flyable {  // 모든 멤버함수가 순수 가상함수면 Interface
public:
	virtual void fly() = 0;  // 순수 가상함수
};
class Pokemon {	
public:
	Flyable* flyable;

	Pokemon(){}

	Pokemon(Flyable* f) {
		this->flyable = f;
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
	Pikachu(){}

	Pikachu(Flyable* f) {
		this->flyable = f;
	}

	void attack() {
		cout << "전기 공격!\n";
	}
};

class Wings : public Flyable {
public:
	void fly() {
		cout << "날개를 펼쳐 날아갑니다~\n";
	}
};
class JetPack : public Flyable {
public:
	void fly() {
		cout << "제트팩 추진기로 날아갑니다!\n";
	}
};
int main() {
	JetPack* jetPack = new JetPack();

	Pikachu* pikachu1 = new Pikachu(new Wings());
	pikachu1->attack();

	delete pikachu1;
	pikachu1 = nullptr;

	Pokemon* pikachu2 = new Pikachu(jetPack);
	pikachu2->performFly();
	pikachu2->attack();

	delete pikachu2;
	pikachu2 = nullptr;
	return 0;
}