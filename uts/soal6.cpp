#include <iostream>

using namespace std;

int main(){
	int angka1, angka2, menu;
	int jumlah, kali, bagi, kurang;
	
	cout << "Masukkan angka pertama: ";
	cin >> angka1;
	
	cout << "Masukkan angka kedua: ";
	cin >> angka2;
	
	cout << "\nMenu: " << endl;
	cout << "1. Penjumlahan " << endl;
	cout << "2. Pengurangan " << endl;
	cout << "3. Perkalian " << endl;
	cout << "4. Pembagian " << endl;
	cout << "Pilih menu: ";
	cin >> menu;
	
	switch(menu){
		case 1: 
			jumlah = angka1 + angka2;
			cout << "\nPenjumlahan: \n" << angka1 << " + " << angka2 << " = " << jumlah << endl;
			break;
		
		case 2:
			kurang = angka1 - angka2;
			cout << "\nPengurangan: \n" << angka1 << " - " << angka2 << " = " << kurang << endl;
			break;
			
		case 3:
			kali = angka1 * angka2;
			cout << "\nPerkalian: \n" << angka1 << " * " << angka2 << " = " << kali << endl;	
			break;
		
		case 4:
			bagi = angka1 / angka2;
			cout << "\nPembagian: \n" << angka1 << " : " << angka2 << " = " << bagi << endl;
			break;
			
		default:
			cout << "\nPilihan yang anda masukkan tidak valid." << endl;
	}
	
	return 0;
}