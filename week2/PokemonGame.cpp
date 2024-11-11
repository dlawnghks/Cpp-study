#include <iostream>
using namespace std;

class Flyable {  // ��� ����Լ��� ���� �����Լ��� Interface
public:
	virtual void fly() = 0;  // ���� �����Լ�
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
		cout << "���ϸ� ����!\n";
	}
};
class Pikachu : public Pokemon {
public:
	Pikachu(){}

	Pikachu(Flyable* f) {
		this->flyable = f;
	}

	void attack() {
		cout << "���� ����!\n";
	}
};

class Wings : public Flyable {
public:
	void fly() {
		cout << "������ ���� ���ư��ϴ�~\n";
	}
};
class JetPack : public Flyable {
public:
	void fly() {
		cout << "��Ʈ�� ������� ���ư��ϴ�!\n";
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