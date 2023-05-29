#include <iostream>
using namespace std;

class abstraksiklas {
private:
	string x, y;
public:
	void setXY(string a, string b) {/*method untuk mengisi nilai private member*/
		x = a;
		y = b;
	}
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};
