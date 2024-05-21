#include <iostream>

using namespace std;

int main(){
	int angka1, angka2;
	int jumlah, kali, bagi, kurang;
	
	cout << "Masukkan angka pertama: ";
	cin >> angka1;
	
	cout << "Masukkan angka kedua: ";
	cin >> angka2;
	
	jumlah = angka1 + angka2;
	kurang = angka1 - angka2;
	kali = angka1 * angka2;
	bagi = angka1 / angka2;
	
	cout << "Penjumlahan: " << jumlah << endl;
	cout << "Pengurangan: " << kurang << endl;
	cout << "Perkalian: " << kali << endl;
	cout << "Pembagian: " << bagi << endl;
	
	return 0;
}