#include <iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya function dari base class";
	}
};

class derivedClass :public baseclass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari derived Class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();
}