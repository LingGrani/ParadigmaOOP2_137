#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10]; /*data yang hanya dapat diakses oleh member class sendiri*/
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};