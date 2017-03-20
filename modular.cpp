#include <iostream>
using namespace std;

//prototype
void prosesBaca();
void prosesTukar();
void prosesTampil();

//variabel global
    int a, b, temp;

//program utama
int main() {

    prosesBaca();
    prosesTukar();
    prosesTampil();

    return 0;
}

    void prosesBaca() {
        cout << "masukkan nilai A : ";
        cin >> a;

        cout << "masukkan nilai B : ";
        cin >> b;
    }

    void prosesTukar() {
        temp=b;
        b=a;
        a=temp;
    }

    void prosesTampil() {
        cout << "====================" << endl;
        cout << "Nilai A sekarang : " << a << endl;
        cout << "Nilai B sekarang : " << b;
    }


