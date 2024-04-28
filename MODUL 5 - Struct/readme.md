# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori:
### Struct
Struct adalah statement yang berguna untuk mengkelompokkan sejumlah data dengan tipe yang berlainan. Data Structures merupakan kumpulan dari data element  yang digabung menjadi satu bagian dengan satu nama. Tiap elemen dikenal sebagai anggota struktur. Tiap anggota boleh berbeda tipe data dan berbeda panjang data.[2]

contoh implementasi struct:[2]
```C++
#include <iostream.h>
#include <conio.h>

struct anggota
{  int no_anggota;
   char nama[30];
};

void main()
{
  anggota  agt;
  cout<<“No. anggota : “; cin>>agt.no_anggota;
    cout<<“No. Anggota adalah : “ << agt.no_anggota;
  getch();
}
```
1. Contoh Struct sebagai Pointer
```C++
#include <iostream.h>
#include <conio.h>

struct anggota
{  int no_anggota;
   char nama[30];
};

void main()
{
  anggota  *agt = new anggota;
  cout<<"No. anggota : "; cin>>agt->no_anggota;
  cout<<"No. anggota adalah : " << agt->no_anggota;
  getch();
}
```

2. Contoh Struct sebagai Array
```C++
#include <iostream.h>
#include <conio.h>

struct anggota
{  int no_anggota;
   char nama[30];
};

void main()
{
  anggota  agt[10]; //data anggota ada 10
  cout<<"No. anggota ke 2 : "; cin>>agt[1].no_anggota;
  cout<<"No. anggota adalah ke 2 : " << agt[1].no_anggota;
  getch();
}
```
Struct biasanya digunakan sebagai representasi dari struktur  berkas data digital.[1]

Struktur dasar:

```C++
struct nama_struktur
{
  tipe_data var_anggota_struktur;
};
Contoh pendeklarasian struktur:

    struct Mahasiswa
      {
        char nim[9];

        char nama[20];

        int thnmasuk;
      };
```
3. Notasi Struct
Notasi (syntax) struct dalam C++ terbilang mudah untuk dipahami dan digunakan. Tuliskan kata kunci “struct” tanpa petik pada awal kode dilanjutkan dengan nama struktur yang diinginkan seperti nama_struktur.[3] 

## Guided 

###  1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
```
### Output:
![Guided 1 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/ca870412-1ef8-42f4-8e8d-88656bfa7193)

 ### Interpretasi : 
 Output program ini menampilkan informasi lengkap tentang sebuah buku,dimana Judul buku adalah "Harry Potter and the Philosopher's Stone", yang ditulis oleh J.K. Rowling dan diterbitkan oleh Bloomsbury Publishing. Buku ini memiliki tebal buku sebanyak 223 halaman dan dijual dengan harga Rp250.000. dimana pada baris pertama kodingan menampilkan judul buku dalam kode judul_buku dan pada baris kedua menampilkan nama pengarang yang terdapat pada kode pengarang, pada baris ketiga menampilkan nama penerbit bukunya yang ada pada kode penerbit, pada baris keempat menampilkan jumlah halaman yang ada pada buku tersebut yang terdapat pada kode tebal_halaman, kemudian pada baris kelima menampilkan harga buku yang di simpan pada atribut harga_buku.


### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.

```C++
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
```
### Output:
![Guided 2 (5)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/5ff9b721-d200-4b2f-a7f2-fc35c581afcf)

### Interpretasi:
Program ini memberikan informasi tentang dua jenis hewan, yaitu harimau dan ikan Nemo. Untuk harimau, informasi yang disajikan meliputi nama hewan, jenis kelamin, cara berkembangbiak, alat pernafasan, tempat hidup, dan apakah hewan tersebut karnivora atau tidak. Harimau juga dikategorikan sebagai hewan darat, dengan informasi tambahan tentang jumlah kaki, apakah hewan tersebut menyusui, dan suara yang dihasilkan. Namun, informasi tentang ikan Nemo mencakup informasi apakah hewan tersebut hidup di laut, deskripsi tentang bentuk sirip, dan pertahanan diri yang dimilikinya. Dengan ini, bisa mendapat gambaran yang lebih jelas tentang karakteristik masing-masing hewan dan lingkungan tempat tinggalnya. Misalnya, harimau adalah hewan darat yang tinggal di hutan, sementara ikan Nemo adalah hewan laut dengan adaptasi khusus untuk hidup di dalam air. Terdapat tiga struktur data yang dijelaskan yaini Hewan, Hewan Darat, dan Hewan Laut. Setiap struktur memberi informasi khusus mengenai hewan, baik itu umum (seperti nama, jenis kelamin, cara berkembangbiak, dll.), hewan darat (jumlah kaki, apakah menyusui, suara), atau hewan laut (bentuk sirip, bentuk pertahanan diri). Beberapa variabel dari masing-masing struktur dan mengisi nilainya dengan informasi spesifik tentang harimau dan ikan Nemo. Setelah itu, program menampilkan informasi tersebut dengan menggunakan perintah cout.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
#include <iostream>
using namespace std;

struct buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5];
};

int main() {
    buku contoh_buku;

    // Mengisi array dengan data
    for (int i = 0; i < 5; ++i) {
        contoh_buku.judul_buku[i] = "Judul Buku Contoh " + to_string(i+1);
        contoh_buku.pengarang[i] = "Pengarang Contoh " + to_string(i+1);
        contoh_buku.penerbit[i] = "Penerbit Contoh " + to_string(i+1);
        contoh_buku.tebal_halaman[i] = 300 + i*10;
        contoh_buku.harga_buku[i] = 150000.0 + i*5000;
    }

    // Menampilkan isi array
    cout << "Data Buku:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Buku " << i+1 << ":" << endl;
        cout << "Judul Buku: " << contoh_buku.judul_buku[i] << endl;
        cout << "Pengarang: " << contoh_buku.pengarang[i] << endl;
        cout << "Penerbit: " << contoh_buku.penerbit[i] << endl;
        cout << "Tebal Halaman: " << contoh_buku.tebal_halaman[i] << endl;
        cout << "Harga Buku: Rp" << contoh_buku.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}

```
### Output:
![output unguided 1 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/a7d27766-cb56-48cf-8952-20d404295ad4)

### Full Screen Shoot:
![Full ss unguided 1](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/df7e383b-06e7-4641-bed5-f654d294bc61)

### Interpretasi: 

Program ini menghasilkan output yang merupakan daftar informasi tentang ke lima buku. Setiap buku menampilkan judul, nama pengarang, penerbit, jumlah halaman, dan harga. Pada buku pertama memiliki judul "Judul Buku Contoh 1", ditulis oleh "Pengarang Contoh 1", diterbitkan oleh "Penerbit Contoh 1", dengan tebal halaman sebanyak 300 halaman, dan dijual dengan harga Rp150.000. Lalu pada buku kedua berjudul "Judul Buku Contoh 2", ditulis oleh "Pengarang Contoh 2", diterbitkan oleh "Penerbit Contoh 2", memiliki 310 halaman, dan dihargai Rp155.000. Buku ketiga memiliki judul "Judul Buku Contoh 3", ditulis oleh "Pengarang Contoh 3", diterbitkan oleh "Penerbit Contoh 3", memiliki 320 halaman, dan dijual dengan harga Rp160.000. Buku keempat berjudul "Judul Buku Contoh 4", ditulis oleh "Pengarang Contoh 4", diterbitkan oleh "Penerbit Contoh 4", dengan jumlah halaman sebanyak 330, dan dijual dengan harga Rp165.000. Kemudian pada buku kelima, memiliki judul "Judul Buku Contoh 5", ditulis oleh "Pengarang Contoh 5", diterbitkan oleh "Penerbit Contoh 5", memiliki 340 halaman, dan dihargai Rp170.000. Fungsi main(), adalah membuat sebuah objek dari struktur buku dengan nama contoh_buku. Selanjutnya, menggunakan sebuah loop untuk mengisi setiap array dalam objek contoh_buku dengan data buku yang berbeda. Data buku diisi dengan menggunakan operasi string untuk menambahkan nomor urut buku pada judul, pengarang, dan penerbit, serta menambahkan nilai yang berbeda pada atribut tebal halaman dan harga buku. Setelah data buku diisi, program menggunakan loop lainnya untuk menampilkan informasi setiap buku yang telah diisi. Setiap informasi buku ditampilkan secara terpisah dengan menggunakan cout untuk mencetak setiap informasi buku.


### 2.  Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?
```C++
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
```
### Output: ![Output Unguided 2 (2)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/f6212976-a0c3-4402-a7c3-422f8e9fe8d9)
![Output Unguided 2 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/32cea192-aadf-41fd-9be5-b6162c20c5db)

### Full Screen Shoot:
![Full ss Unguided 2](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/e10cbd90-c55b-4cd0-82d6-a66f9c2fba06)

### Interpretasi:
Program tersebut merupakan daftar informasi mengenai buku-buku yang telah dimasukkan. Setiap buku memiliki informasi yang terdiri dari judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Pada buku pertama, judulnya adalah "malio at the midnight", pengarangnya adalah "skysphire", penerbitnya adalah "heiyou", tebal halamannya adalah 400 halaman, dan harganya adalah Rp80000.Begitupun seterusnya sampai buku ke lima.  Di mana setiap buku diberi label "Buku ke-i", diikuti oleh informasi tentang judul, pengarang, penerbit, tebal halaman, dan harga buku. Ini membuatnya mudah dipahami dan memudahkan pembaca untuk melihat informasi untuk setiap buku dalam daftar. Adapun fungsi main(), program menggunakan loop for untuk meminta pengguna memasukkan informasi untuk setiap buku. Setiap informasi dimasukkan melalui input pengguna menggunakan getline() untuk string dan cin untuk tipe data numerik. Setelah memasukkan informasi, cin.ignore() digunakan untuk membersihkan karakter newline yang masih tersisa. Setelah semua informasi dimasukkan, program menggunakan loop lainnya untuk menampilkan informasi setiap buku yang telah dimasukkan. Setiap informasi buku ditampilkan secara terpisah dengan menggunakan cout untuk mencetak setiap informasi buku.

## Kesimpulan
Struct dalam C++ seperti kotak penyimpanan yang dapat berisi informasi terstruktur. Contohnya, kita bisa membuat struktur untuk menyimpan detail buku seperti judul, pengarang, penerbit, jumlah halaman, dan harga. Dalam contoh kode tersebut, kita menggunakan struct untuk menyimpan informasi tentang beberapa buku. Diminta untuk memasukkan detail buku, dan kemudian program menampilkan informasi buku-buku tersebut secara teratur. Dengan menggunakan struct, pengelolaan dan representasi data menjadi lebih terstruktur dan mudah dipahami.

## Referensi
[1] Sasongko, A. Modul Praktikum Algoritma & Pemrograman 1 (C++).

[2] Sasongko, A. Algoritma dan Pemrograman 1 C++.

[3] Dwi Putra, Muhammad T., et al. BELAJAR PEMROGRAMAN LANJUT DENGAN C++. Edited by Damayanti, Evi, CV WIDINA MEDIA UTAMA, 2023.

