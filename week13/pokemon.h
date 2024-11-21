#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private:
	string name;
public:
	Pokemon() : name("무명") {

	}
	Pokemon(const string& name) : name(name) {
		cout << "포켓몬 생성!\n";
	}
	string getName() const {
		return name;
	}
};
