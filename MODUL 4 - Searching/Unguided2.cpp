#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int hitungVokal(string kalimat) {
    int jumlahVokal = 0;
    for (char huruf : kalimat) {
        // Mengonversi huruf menjadi huruf kecil untuk mempermudah perbandingan
        huruf = tolower(huruf);
        // Memeriksa apakah huruf adalah huruf vokal
        if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u') {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main() {
    string kalimat;
    
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    int jumlahVokal = hitungVokal(kalimat);
    
    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlahVokal << endl;
    
    return 0;
}