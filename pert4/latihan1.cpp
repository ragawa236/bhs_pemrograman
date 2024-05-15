#include <iostream>
using namespace std;

int angka1, angka2, hasil, operasi;

void tambah(){
    cout << "TAMBAH" <<endl;
    hasil = angka1+angka2;
    cout << "%d + %d = %d", angka1, angka2, hasil <<endl;
}

void kurang(){
    cout << "KURANG" <<endl;
    hasil = angka1-angka2;
    cout << "%d - %d = %d", angka1, angka2, hasil <<endl;
}

void kali(){
    cout << "KALI" <<endl;
    hasil = angka1*angka2;
     cout << "%d x %d = %d", angka1, angka2, hasil <<endl;
}

void bagi(){
    cout << "BAGI" <<endl;
    hasil = angka1/angka2;
     cout << "%d : %d = %d", angka1, angka2, hasil <<endl;
}

int main(){
    cout << "Masukkan angka pertama dan kedua!" <<endl;
    cout << "angka pertama: " ;
    cin >> angka1;
    cout << "angka kedua: " ;
    cin >> angka2;

    cout << "Operasi:" <<endl;
    cout << "1. Tambah" <<endl;
    cout << "2. Kurang" <<endl;
    cout << "3. Kali" <<endl;
    cout << "4. Bagi" <<endl;

    cout << "Masukkan operasi yg diinginkan: " ; 
    cin >> operasi;
    switch (operasi)
    {
    case 1:
        tambah();
        break;
    case 2:
        kurang();
        break;
    case 3:
        kali();
        break;
    case 4:
        bagi();
        break;

    default:
        cout << "Pilihan yg anda masukkan salah" ;
        break;
    }
}