#include <iostream>
using namespace std;

class baseclass final{/*class yang tidak bisa diwariskan*/
public:
	virtual void perkenalan() {
		cout << "Hallo saya function dari base class";
	}
};

class derivedclass :public baseclass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari derived Class";
	}
};

int main() {
	derivedclass a;
	a.perkenalan();

	return 0;
}