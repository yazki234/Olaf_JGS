#include <iostream>
using namespace std;

void prosesbaca();
int prosestambah();
int proseskurang();
void prosestampil();

    int a, b;

int main() {
    prosesbaca();
    prosestampil();

    return 0;
}
    void prosesbaca() {
        cout << "masukkan nilai A : ";
        cin >> a;

        cout << "masukkan nilai B : ";
        cin >> b;
    }

    int prosestambah() {
    return a + b;
    }

    int proseskurang() {
    int hasil;
    hasil = a - b;

    return hasil;
    }

    void prosestampil() {
        cout << "Hasil tambah : " << prosestambah() << endl;
        cout << "Hasil kurang : " << proseskurang() << endl;
    }
