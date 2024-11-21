#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private:
	string name;
public:
	Pokemon() : name("公疙") {

	}
	Pokemon(const string& name) : name(name) {
		cout << "器南阁 积己!\n";
	}
	string getName() const {
		return name;
	}
};
