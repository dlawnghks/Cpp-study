#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private:
	string name;
public:
	Pokemon() : name("����") {

	}
	Pokemon(const string& name) : name(name) {
		cout << "���ϸ� ����!\n";
	}
	string getName() const {
		return name;
	}
};
