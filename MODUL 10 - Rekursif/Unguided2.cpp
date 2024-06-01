#include <iostream>

using namespace std;

// Deklarasi fungsi
int faktorialB(int n);

// Fungsi A yang memanggil fungsi B
int faktorialA(int n) {
    if (n == 0) {
        return 1;
    }
    return n * faktorialB(n - 1);
}

// Fungsi B yang memanggil fungsi A
int faktorialB(int n) {
    if (n == 0) {
        return 1;
    }
    return n * faktorialA(n - 1);
}

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    if (n < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif." << endl;
        return 1;
    }

    int hasil = faktorialA(n);
    cout << "Faktorial dari " << n << " adalah: " << hasil << endl;

    return 0;
}
