#include <iostream>

using namespace std;

int main() {
    int n, i, j, s;

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << " *";
        }
        cout << "\n";
    }
    return 0;
}
