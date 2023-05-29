#include <iostream>
using namespace std;

class baseclass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya function dari base class";
	}
};
