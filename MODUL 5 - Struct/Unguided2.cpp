#include <iostream>
#include <string>
using namespace std;

const int MAX_BUKU = 5;

struct Buku {
    string judul_buku[MAX_BUKU];
    string pengarang[MAX_BUKU];
    string penerbit[MAX_BUKU];
    int tebal_halaman[MAX_BUKU];
    double harga_buku[MAX_BUKU];
};

int main() {
    Buku daftar_buku;

    for (int i = 0; i < MAX_BUKU; ++i) {
        cout << "Masukkan informasi untuk buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, daftar_buku.judul_buku[i]);
        cout << "Pengarang: ";
        getline(cin, daftar_buku.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, daftar_buku.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> daftar_buku.tebal_halaman[i];
        cout << "Harga Buku: Rp";
        cin >> daftar_buku.harga_buku[i];
        cin.ignore(); 
    }

    cout << "\nDaftar Buku:" << endl;
    for (int i = 0; i < MAX_BUKU; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: " << daftar_buku.judul_buku[i] << endl;
        cout << "Pengarang: " << daftar_buku.pengarang[i] << endl;
        cout << "Penerbit: " << daftar_buku.penerbit[i] << endl;
        cout << "Tebal Halaman: " << daftar_buku.tebal_halaman[i] << endl;
        cout << "Harga Buku: Rp" << daftar_buku.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}