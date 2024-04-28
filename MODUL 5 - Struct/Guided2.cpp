#include <iostream>
#include <string>
using namespace std;

struct Hewan {
    string Nama_hewan;
    char Jenis_kelamin;
    string Cara_berkembangbiak;
    string Alat_pernafasan;
    string Tempat_hidup;
    bool Karnivora;
};

struct HewanDarat {
    bool Darat;
    int Jumlah_Kaki;
    bool Menyusui;
    string Suara;
};

struct HewanLaut {
    bool Laut;
    string Bentuk_sirip;
    string Bentuk_pertahanan_diri;
};

int main() {

    Hewan harimau;
    harimau.Nama_hewan = "Harimau";
    harimau.Jenis_kelamin = 'J';
    harimau.Cara_berkembangbiak = "Melahirkan";
    harimau.Alat_pernafasan = "Paru-paru";
    harimau.Tempat_hidup = "Hutan";
    harimau.Karnivora = true;

    HewanDarat harimauDarat;
    harimauDarat.Darat = true;
    harimauDarat.Jumlah_Kaki = 4;
    harimauDarat.Menyusui = true;
    harimauDarat.Suara = "Mengaum";

    HewanLaut ikanNemo;
    ikanNemo.Laut = true;
    ikanNemo.Bentuk_sirip = "Memiliki sirip ekor panjang dan sirip punggung";
    ikanNemo.Bentuk_pertahanan_diri = "Kulit yang tebal dan badan berwarna cerah";

    cout << "Informasi Harimau:" << endl;
    cout << "Nama Hewan: " << harimau.Nama_hewan << endl;
    cout << "Jenis Kelamin: " << harimau.Jenis_kelamin << endl;
    cout << "Cara Berkembangbiak: " << harimau.Cara_berkembangbiak << endl;
    cout << "Alat Pernafasan: " << harimau.Alat_pernafasan << endl;
    cout << "Tempat Hidup: " << harimau.Tempat_hidup << endl;
    cout << "Karnivora: " << (harimau.Karnivora ? "Ya" : "Tidak") << endl;

    cout << "\nInformasi Harimau Darat:" << endl;
    cout << "Darat: " << (harimauDarat.Darat ? "Ya" : "Tidak") << endl;
    cout << "Jumlah Kaki: " << harimauDarat.Jumlah_Kaki << endl;
    cout << "Menyusui: " << (harimauDarat.Menyusui ? "Ya" : "Tidak") << endl;
    cout << "Suara: " << harimauDarat.Suara << endl;

    cout << "\nInformasi Ikan Nemo:" << endl;
    cout << "Laut: " << (ikanNemo.Laut ? "Ya" : "Tidak") << endl;
    cout << "Bentuk Sirip: " << ikanNemo.Bentuk_sirip << endl;
    cout << "Bentuk Pertahanan Diri: " << ikanNemo.Bentuk_pertahanan_diri << endl;

    return 0;
}