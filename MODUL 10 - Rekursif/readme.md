# <h1 align="center">Laporan Praktikum Modul Rekursif</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Rekursif:
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang memanggil dirinya sendiri. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi.[1] Secara sederhana, rekursi adalah kemampuan sebuah fungsi untuk memecah masalah menjadi sub-masalah yang lebih kecil. Fungsi tersebut kemudian memanggil dirinya sendiri untuk menyelesaikan sub-masalah tersebut.[2]

### beberapa jenis fungsi rekursif, yaitu:
1. Tail Recursion: Teknik optimisasi pada fungsi rekursif di mana pemanggilan rekursif pada fungsi tersebut merupakan operasi terakhir. Contoh pada pemrograman bahasa C.

2. Head Recursion: Teknik implementasi fungsi rekursif di mana pemanggilan rekursif dilakukan pada bagian awal atau sebelum operasi lainnya dilakukan.

3. Nested Recursion: Pemanggilan fungsi rekursif pada suatu fungsi yang dilakukan sebagai parameter input dari pemanggilan rekursif pada fungsi lain.

4. Tree Recursion: Fungsi rekursif di mana setiap panggilan rekursif menghasilkan beberapa panggilan rekursif lainnya. Sistem ini membentuk struktur pohon, maka disebut dengan tree recursion

### kelebihan dan kekurangan rekursif:
Kelebihan fungsi rekursif adalah bahwa kode dapat lebih singkat dan mudah dipahami. Namun, kekurangannya adalah bahwa fungsi rekursif dapat menyebabkan stack overflow jika proses pemanggilan berulang dirinya sendiri. Oleh karena itu, dalam beberapa kasus, fungsi iteratif dapat lebih efektif dan efisien dalam penggunaan memori.[3]



## Guided 

### 1. Guided 

```C++
#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    countdown(n - 1);
}

int main( ) {
    cout << " Rekursif Langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```
### Output:
![output guided 1 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/18de6715-c0e4-4ba8-a6a9-773e2a14cf25)
### Full Screen shoot:
![full ss guided 1 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/3d9a6286-d3b8-40df-a1a2-4b02ce300e31)
### Interpretasi:
Program ini adalah contoh penggunaan rekursi langsung untuk menghitung mundur dari suatu bilangan hingga 1. Dimulai dengan mendefinisikan fungsi countdown yang menerima parameter bilangan bulat n, fungsi ini memiliki kondisi dasar yang memeriksa apakah n sama dengan 0; jika benar, fungsi berhenti dan mengembalikan kontrol. Jika n tidak 0, fungsi mencetak nilai n diikuti spasi, lalu memanggil dirinya sendiri dengan n-1. Proses ini berulang hingga n mencapai 0. Dalam fungsi main, program mencetak "Rekursif Langsung: " dan memanggil fungsi countdown dengan nilai awal 5. Fungsi countdown bekerja secara rekursif mencetak nilai dari 5 hingga 1. Setelah semua panggilan rekursif selesai, kontrol kembali ke fungsi main, yang mencetak baris baru sebelum program selesai. Hasil output program adalah "Rekursif Langsung
### Guided 2
```C++
#include <iostream>

using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n-1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n<< " ";
        functionB(n/2);
    }
}

int main( ) {
    int num= 5;
    cout << "Rekursif Tidak Langsung:";
    functionA(num);
    return 0;
}
```
### Output:
![output guided 2 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/1da753e5-3b0e-49a6-9415-a1981bb67797)
### Full screen shoot:
![full ss guided 2 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/7d9310f6-329a-4e44-999a-f4516204f2ab)
### Interpretasi:
Program ini menggunakan rekursi tidak langsung untuk mencetak serangkaian bilangan berdasarkan aturan tertentu. Fungsi main mendeklarasikan num dengan nilai 5, mencetak "Rekursif Tidak Langsung: ", dan memanggil functionA dengan num. Dalam functionA, jika n lebih besar dari 0, nilai n dicetak dan functionB dipanggil dengan n-1. Dalam functionB, jika n lebih besar dari 0, nilai n dicetak dan functionA dipanggil dengan n/2. Proses ini berlanjut hingga nilai n menjadi 0. Saat dijalankan, dimulai dari functionA(5) yang mencetak 5, kemudian functionB(4) mencetak 4, lalu functionA(2) mencetak 2, dan akhirnya functionB(1) mencetak 1. Rekursi berhenti saat functionA(0) tidak memenuhi kondisi rekursif. Output akhir adalah "Rekursif Tidak Langsung: 5 4 2 1".

## Unguided 

### 1. [Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif]

```C++
#include <iostream>

using namespace std;

int faktorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * faktorial(n - 1);
}

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    if (n < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif." << endl;
        return 1;
    }

    int hasil = faktorial(n);
    cout << "Faktorial dari " << n << " adalah: " << hasil << endl;

    return 0;
}

```
#### Output:
![output unguided 1 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/60d91382-1ef1-45a1-885e-9bdac02bab55)
#### Full Screenshot:
![full ss unguided 1 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c7229da7-f533-4369-a509-e7d6e291303f)
### Interpretasi:
Program ini bertujuan untuk menghitung faktorial dari sebuah bilangan bulat positif yang diinputkan oleh pengguna. Saat program dijalankan, pengguna diminta untuk memasukkan bilangan bulat positif. Jika bilangan yang dimasukkan lebih kecil dari 0, program akan memberikan pesan kesalahan. Namun, jika input sesuai, program akan menggunakan fungsi rekursif faktorial untuk menghitung nilai faktorialnya. Fungsi rekursif ini bekerja dengan memanggil dirinya sendiri dengan nilai yang terus berkurang hingga mencapai 0, di mana nilai faktorialnya adalah 1. Setelah mendapatkan hasil faktorialnya, program akan mencetak hasilnya. Sebagai contoh, jika pengguna memasukkan nilai 5, program akan menghasilkan faktorial dari 5, yaitu 120, dan kemudian mencetak pesan yang menyatakan "Faktorial dari 5 adalah: 120".
### 2. [Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!]

```C++
#include <iostream>

using namespace std;

int faktorialB(int n);

int faktorialA(int n) {
    if (n == 0) {
        return 1;
    }
    return n * faktorialB(n - 1);
}

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

```
### Output:
![output unguided 2 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c6ecec10-3365-4b7e-acca-48b47dc6bbc1)
### Full Screen Shoot:
![full ss unguided 2 rekursif](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/fb642b50-0848-4a31-a475-f96b96a2647b)
### Interpretasi:
Program tersebut menggunakan rekursi tidak langsung antara dua fungsi, yaitu faktorialA dan faktorialB. Saat program dijalankan, pengguna diminta memasukkan bilangan bulat positif. Program memeriksa validitas input, memberikan pesan kesalahan jika input tidak valid, dan menghitung faktorial dari bilangan yang dimasukkan menggunakan faktorialA. Hasilnya kemudian dicetak. Contohnya, jika pengguna memasukkan nilai 5, program akan menghitung faktorial dari 5, yaitu 120, dan mencetak "Faktorial dari 5 adalah: 120". Proses ini terjadi karena kedua fungsi saling memanggil satu sama lain, dengan setiap fungsi memanggil yang lain secara bergantian.

## Kesimpulan:
Rekursif adalah proses di mana sebuah fungsi atau prosedur memanggil dirinya sendiri, memecah masalah menjadi sub-masalah yang lebih kecil. Ada beberapa jenis fungsi rekursif, termasuk Tail Recursion, Head Recursion, Nested Recursion, dan Tree Recursion. Kelebihan rekursi adalah kode yang lebih singkat dan mudah dipahami, tetapi kelemahannya adalah potensi terjadinya stack overflow jika pemanggilan rekursif tidak terbatas. Dalam beberapa situasi, penggunaan fungsi iteratif dapat lebih efektif dalam penggunaan memori.

## Referensi
[1] Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts, problems, Interview Questions. CareerMonk Publications. 

[2] Purbasari, W., Iqbal, T., Inayah, I., Munawir, M., Sutjiningtyas, S., Hikmawati, E., ... & Basri, H. (2024). ALGORITMA PEMROGRAMAN.

[3] Jurnal Sains dan Teknologi Widya.

