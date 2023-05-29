#include <iostream>
using namespace std;

class Orang
{
public:
    int umur;
    Orang(int pUmur) :umur(pUmur) {
        cout << "orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : virtual public Orang {
public:
    pekerja(int pUmur) :Orang(pUmur) {
        cout << "Orang dibuat\n" << endl;
    }
};

class pelajar :virtual public Orang {
public:
    pelajar(int pUmur) :Orang(pUmur) {
        cout << "Orang dibuat\n" << endl;
    }
};

class budi :public pekerja, public pelajar {
public:
    budi(int pUmur) :pekerja(pUmur), pelajar(pUmur) {
        cout << "Budi dibuat\n" << endl;
    }
};

int main() {
    budi a(12);
    return 0;
}