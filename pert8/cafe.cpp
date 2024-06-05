#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>  
#include <stdlib.h> 

using namespace std;

class MenuItem {
public:
    string nama;
    double harga;
    MenuItem(string n, double h) : nama(n), harga(h) {}
};

class Pesanan {
public:
    vector<MenuItem> itemPesanan;
    void tambahItem(MenuItem item) {
        itemPesanan.push_back(item);
    }
    double totalHarga() {
        double total = 0;
        for (auto &item : itemPesanan) {
            total += item.harga;
        }
        return total;
    }
    void cetakStruk(string metodePembayaran) {
        cout << "\n----- Struk SmallCafe -----\n";
        cout << fixed << setprecision(2);
        for (auto &item : itemPesanan) {
            cout << item.nama << " - Rp" << item.harga << "\n";
        }
        cout << "----------------------------\n";
        cout << "Total: Rp" << totalHarga() << "\n";
        cout << "Pembayaran: " << metodePembayaran << "\n";
        cout << "----------------------------\n";
        cout << "Terima kasih telah mengunjungi SmallCafe!\n";
    }
};

void tampilkanMenu(vector<MenuItem> &menu) {
    cout << "\n--- Menu SmallCafe ---\n";
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << i + 1 << ". " << menu[i].nama << " - Rp" << menu[i].harga << "\n";
    }
    cout << "----------------------\n";
}

int main() {
    vector<MenuItem> menu = {
        MenuItem("Espresso", 25000),
        MenuItem("Cappuccino", 30000),
        MenuItem("Latte", 35000),
        MenuItem("Croissant", 20000),
        MenuItem("Sandwich", 40000)
    };

    Pesanan pesanan;
    int pilihan;
    bool memesan = true;

    while (memesan) {
        system("cls"); 
        tampilkanMenu(menu);
        cout << "Pilih item untuk ditambahkan ke pesanan Anda (0 untuk selesai): ";
        cin >> pilihan;

        if (pilihan == 0) {
            memesan = false;
        } else if (pilihan > 0 && pilihan <= menu.size()) {
            pesanan.tambahItem(menu[pilihan - 1]);
            cout << menu[pilihan - 1].nama << " ditambahkan ke pesanan Anda.\n";
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
        cout << "Tekan sembarang tombol untuk melanjutkan...\n";
        getch(); 
    }

    system("cls"); 
    string metodePembayaran;
    cout << "Pilih metode pembayaran (Tunai/Kartu/Aplikasi): ";
    cin >> metodePembayaran;

    system("cls"); 
    pesanan.cetakStruk(metodePembayaran);

    return 0;
}
