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

class pekerja :public Orang {
public:
    pekerja(int pUmur) :Orang(pUmur) {
        cout << "Orang dibuuat\n" << endl;
    }
};