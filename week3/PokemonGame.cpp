#include <iostream>
using namespace std;

class Flyable {  // ��� ����Լ��� ���� �����Լ��� Interface
public:
	virtual void fly() = 0;  // ���� �����Լ�
	Flyable(){}
	virtual ~Flyable() {}
};
class Pokemon {
public:
	Flyable* flyable;  // has-a

	Pokemon() {}

	Pokemon(Flyable* f) {
		this->flyable = f;
		cout << this << " : ���ϸ� Ŭ������ �Ű����� ������\n";
	}
	virtual ~Pokemon() {
		cout << this << " : ���ϸ� Ŭ������ �Ҹ���!\n";
		//delete this->flyable;
		//this->flyable = nullptr;
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
	Pikachu() {}

	Pikachu(Flyable* f) {
		this->flyable = f;
		cout << this << " : ��ī�� Ŭ������ �Ű����� ������\n";
	}
	~Pikachu() {
		cout << this << " : ��ī�� Ŭ������ �Ҹ���!\n";
		delete this->flyable;
		//this->flyable = nullptr;
	}
	void attack() {
		cout << "���� ����!\n";
	}
};

class Wings : public Flyable {
public:
	Wings() {
		cout << this << " : Wings Ŭ������ �⺻ ������\n";
	}
	~Wings() {
		cout << this << " : Wings Ŭ������ �Ҹ���!\n";
	}
	void fly() {
		cout << "������ ���� ���ư��ϴ�~\n";
	}
};
class JetPack : public Flyable {
public:
	JetPack() {
		cout << this << " : JetPack Ŭ������ �⺻ ������\n";
	}
	~JetPack() {
		cout << this << " : JetPack Ŭ������ �Ҹ���!\n";
	}
	void fly() {
		cout << "��Ʈ�� ������� ���ư��ϴ�!\n";
	}
};
int main() {
	JetPack* jetPack = new JetPack();

	Pikachu* pikachu1 = new Pikachu(new Wings());  // �� �޸𸮿� �Ҵ�� new Wings() ��ü�� �޸� ���� ����
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