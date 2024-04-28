#include <iostream>
#include <string>
using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
};

int main() {
    buku contoh_buku;

    contoh_buku.judul_buku = "Harry Potter and the Philosopher's Stone";
    contoh_buku.pengarang = "J.K. Rowling";
    contoh_buku.penerbit = "Bloomsbury Publishing";
    contoh_buku.tebal_halaman = 223;
    contoh_buku.harga_buku = 250000.0;

    cout << "Judul Buku: " << contoh_buku.judul_buku << endl;
    cout << "Pengarang: " << contoh_buku.pengarang << endl;
    cout << "Penerbit: " << contoh_buku.penerbit << endl;
    cout << "Tebal Halaman: " << contoh_buku.tebal_halaman << endl;
    cout << "Harga Buku: Rp" << contoh_buku.harga_buku << endl;

    return 0;
}