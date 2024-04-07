# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Array:
 Array adalah struktur data yang menyimpan data-data ber tipe sama dalam urutan tertentu. Array dapatdianalogikansebagaisebuahloker yang memiliki sederetan kotak penyimpanan yang diberi nomor berurutan. Data-data dalam array disebut elemen array. Dengan array setiap elemen bisa diakses langsung melalui indeksnya. Kelebihan lain dari array adalah kita bisa memakai sejumlah variable dengan nama yang sama asalkan variable tersebut dalam indeks yang berbeda. [1] 
### Karakteristik Array:
a) Mepunyai batasan dari pemesanan alokasi memori (bersifat statis)

b) Mempunyai tipe data sama (bersifat homogen)

c) Dapat diakses secara acak 

### Deklarasi Array:
Ada tiga hal yang harus diketahui dalam mendeklarasikan array,yaitu:

 a)  Type data array

 b)  Nama variable array 
 
 c)  Subkrip/index array. [2]

### Jenis-jenis Array:

1. Array Satu Dimensi:

   Array yang terdiri dari satu baris dan banyak kolom atau satu
kolom dan banyak baris. 

2. Array Dua Dimensi:

   Array dua dimensi  merupakan perluasan dari sebuah array satu dimensi yang terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama.

3. Array Tiga Dimensi:

   Array tiga dimensi digunakan untuk mengelola data dalam bentuk 3 dimensi atautiga sisi. [3]

### Keunggulan Array:

1. Array sangat cocok untuk pengaksesan acak. Sembarang elemen di array dapat diacu secara langsung tanpa melalui elemen-elemen lain.

2. Jika berada disuatu lokasi elemen,maka sangat mudah menelusuri ke elemen-elemen tetangga, baik elemen pendahulu atau elemen penerus.

3. Jika elemen-elemen array adalah nilai-nilai independen dan seluruhnya harus terjaga, maka penggunaan penyimpanan nya sangat efisien.

### Kelemahan Array:
1. Array harus ber tipe homogen. Kita tidak dapat mempunyai array dimana satu elemen adalah karakter, elemen lain bilangan, dan elemen lain adalah tipe-tipe lain.

2. Kebanyakan bahasa pemrograman mengimplementasikan array statik yang sulit diubah ukurannya diwaktu eksekusi. [4]

### Operasi Dasar Pada Array:
Terdapat dua operasi, yaitu :
1) Operasi terhadap satu elemen/posisi array
2) Operasi terhadap array sebagai keseluruhan
a)  Dua operasi paling dasar terhadap satu elemen/posisi adalah :·Penyimpanan nilai elemen ke posisi tertentu di array· pengambilan nilai elemen dari posisi tertentu di array 
b) Operasi-operasi dasar terhadap array secara keseluruhan adalah :

- Operasi penciptaan·
- Operasi penghancuran·         
- Operasi pemrosesan tranversal·         
- Operasi pencarian (table look-up)·         
- Operasi sorting. [5]


## Guided 

### 1. Program Input Array

```C++
#include <iostream>
using namespace std;
//PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array 
    int arr[2] [3] [3] ;
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z <<"] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for(int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
### Output:

![Guided 1 output](https://github.com/diahintannuraini/praktikum-2/assets/162097079/7752bd82-2a5a-4dc3-a12a-031275412ff5)

Output tersebut menunjukkan nilai-nilai dalam array tiga dimensi yang disebut "Input Array" dan "Data Array". Setiap elemen dalam array diinisialisasi dengan angka sesuai dengan indeksnya. Kemudian, program mencetak kembali nilai-nilai tersebut dalam format matriks dua dimensi. Matriks tersebut terdiri dari dua matriks, dipisahkan oleh baris kosong. Setiap matriks menunjukkan bagian dari array tiga dimensi yang sesuai. Program tersebut berhasil mengumpulkan dan menampilkan kembali nilai-nilai dalam array tiga dimensi dengan format matriks dua dimensi yang mana matriks pertama menunjukkan bagian pertama dari array tiga dimensi, sedangkan matriks kedua menunjukkan bagian kedua.

### Full Screen shoot:

![guided 1 full](https://github.com/diahintannuraini/praktikum-2/assets/162097079/bc249213-177d-433e-8040-aba41ccafb71)


### 2. Program Mencari Nilai  Maksimal Pada Array

```C++
#include <iostream>
using namespace std;

int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
### Output:

![output guided 2](https://github.com/diahintannuraini/praktikum-2/assets/162097079/fdb9d6f4-4abc-41d3-8414-8ee1df268a21)

diminta untuk memasukkan panjang array, yang dalam kasus ini adalah 4. Setelah itu, program meminta pengguna untuk memasukkan empat angka secara berurutan. Setelah itu memasukkan angka-angka tersebut, program menemukan nilai maksimum dari array yang dimasukkan, yaitu 4, dan mencatat bahwa nilai tersebut berada pada indeks ke-3 dalam array. Membuktikan bahwa program berhasil memproses array yang dimasukkan pengguna dan menemukan nilai maksimumnya, serta menunjukkan indeks di mana nilai maksimum tersebut ditemukan.

### Full Screen Shoot:

![guided 2 full](https://github.com/diahintannuraini/praktikum-2/assets/162097079/26829e1a-015c-4743-8697-9b971c80c3dc)

## Unguided 

### 1. [Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!]

```C++
#include <iostream>
using namespace std;

int main() {
    int hai [10];

    cout << "\nMasukkan 10 Angka:\n";
    for (int i = 0; i < 10; ++i){
        cout << "Masukkan Angka ke-" << i + 1 << ": "; cin >> hai[i];
  }

  cout << "\nData Array: ";
  for (int i = 0; i < 10; ++i) {
      cout << hai[i] << " "; 
  }

  cout << "\nNomor Genap: ";
  for (int i = 0; i < 10; ++i) {
      if (hai[i] % 2 == 0) {
          cout << hai[i] << " ";

      }
  }
  cout << "\nNomor Ganjil: ";
  for (int i = 0; i < 10; ++i) {
      if (hai[i] % 2 != 0) {
          cout << hai[i] << " ";
      }

  }
  cout << endl;
  return 0;
}
```
#### Output:

![output unguided 1](https://github.com/diahintannuraini/praktikum-2/assets/162097079/138faa4d-c70c-4ee5-9ed6-3f64e163ed85)

 Dari hasil kodingan tersebut, pengguna diminta untuk memasukkan 10 angka secara berurutan. Setelah pengguna memasukkan angka-angka tersebut, program mencetak kembali angka-angka tersebut sebagai "Data Array".
 Program mengidentifikasi angka genap dan angka ganjil dari angka-angka yang dimasukkan. Dalam hal ini, angka genap adalah angka yang habis dibagi dua tanpa sisa, sedangkan angka ganjil adalah angka yang tidak habis dibagi dua. 
Maka dari itu, program berhasil mengumpulkan dan menampilkan kembali data yang dimasukkan oleh pengguna. Selain itu, program juga berhasil mengidentifikasi angka genap dan angka ganjil dari data tersebut dan mencetaknya sebagai "Nomor Genap" dan "Nomor Ganjil" secara berurutan.

#### Full Screenshot:

![unguided 1 full](https://github.com/diahintannuraini/praktikum-2/assets/162097079/e6c9dc88-d3c3-4154-9bc1-d6a8d89e2298)

### 2. [Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!]

```C++

#include <iostream>
using namespace std;

int main() {
    int B, C, D;

    cout << "\nMasukkan panjang B: "; cin >> B;
    cout << "Masukkan panjang C: "; cin >> C;
    cout << "Masukkan panjang D: "; cin >> D;
    cout << endl;

    int hai[B] [C] [D] ;

    for (int b = 0; b < B; b++) {
        for (int c = 0; c < C; c++) {
            for (int d = 0; d < D; d++) {
                cout << "Input Array [" << b << "] [" << c << "] [" << d << "] = "; cin >> hai[b] [c] [d];

            }
        }
    }
    cout << endl;

    cout << "Data Array :\n";
    for (int b = 0; b < B; b++) {
        for (int c = 0; c < C; c++) {
            for (int d = 0; d < D; d++) {
                 cout << "Data Array [" << b << "] [" << c << "] [" << d << "] = " << hai[b][c][d] << endl;
            }
        }
    }
    cout << endl;

        cout << "Array :\n";
    for (int b = 0; b < B; b++) {
         for (int c = 0; c < C; c++) {
             for (int d = 0; d < D; d++) {
                cout << hai[b][c][d] << ' ';
             }
             cout << endl;
         }
         cout << endl;

    }
    return 0;
}

```

### Output:

![output unguided 2](https://github.com/diahintannuraini/praktikum-2/assets/162097079/00364f72-82cc-401e-811b-2353c8190d6e)

  memasukkan panjang B, C, dan D secara berurutan. Setelah itu, program menampilkan data masukan ke dalam array tiga dimensi yang disebut "Input Array". Kemudian, program mencetak kembali data tersebut sebagai "Data Array". jadi, program berhasil mengumpulkan input pengguna dan menampilkan kembali data tersebut dalam format yang diminta. Array yang ditampilkan adalah matriks dua dimensi dengan dimensi sesuai dengan input yang dimasukkan pengguna. Setiap elemen dalam matriks adalah nilai yang telah dimasukkan oleh pengguna sesuai dengan indeks yang ditentukan.

### Full Screen Shoot:

![unguided 2 full](https://github.com/diahintannuraini/praktikum-2/assets/162097079/234e2db8-3365-4769-adde-5b154bf7b6fe)

### 3. [Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!]
```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "\nInput Jumlah Angka Dalam Data Array: "; cin >> n;

    int hai[n];
    for (int i = 0; i < n; ++i) {
        cout << "Angka ke-" << i + 1 << " : ";
        cin >> hai[i];
    }
    int maksimum = hai[0];
    int minimum = hai[0];
    int total = hai[0];

    for (int i = 1; i < n; ++i) {
        if (hai[i] > maksimum) {
            maksimum = hai[i];
        }
        if (hai[i] < minimum) {
            minimum = hai[i];
        }
        total += hai[i];
    }
    double ratarata = total / n;

    cout << "\nNilai Maksimum        : " << maksimum << endl;
    cout << "Nilai Minimum            : " << minimum << endl;
    cout << "Nilai Rata-rata           : " << ratarata << endl;
    
    return 0;
}
```
### Output: 

![output unguided 3](https://github.com/diahintannuraini/praktikum-2/assets/162097079/dd205346-23df-43db-b10b-e73f5be7333c)

Output yang diberikan menunjukkan hasil dari pemrosesan data array yang telah dimasukkan. Diminta untuk memasukkan jumlah angka dalam data array, yang dalam kasus ini adalah 5. Kemudian, diminta untuk memasukkan angka-angka tersebut satu per satu. Setelah semua angka dimasukkan, program melakukan perhitungan terhadap data array yang telah dimasukkan. Program menemukan nilai maksimum dari data array, yang dalam kasus ini adalah 5. Selanjutnya, program juga menemukan nilai minimum, yang adalah 1. Terakhir, program menghitung nilai rata-rata dari seluruh angka dalam data array, yang dalam kasus ini adalah 3. Maka dari itu, program berhasil memproses data array yang dimasukkan pengguna dan menghasilkan informasi statistik seperti nilai maksimum, minimum, dan rata-rata dari data tersebut.

### Full Screen Shoot:

![unguided 3 full](https://github.com/diahintannuraini/praktikum-2/assets/162097079/d554cdd2-68ec-41a1-8a80-445e4f7a76a9)

## Kesimpulan
Setelah menyelesaikan ketiga program tersebut, terlihat adanya pola yang sering muncul dalam penggunaan array. Ini mencakup kemampuannya dalam menyimpan data secara terstruktur, melakukan perulangan dan operasi perhitungan pada data tersebut, serta memberikan fleksibilitas kepada pengguna untuk menentukan bentuk array, memasukkan data, dan mendapatkan output sesuai kebutuhan mereka. Dengan demikian, penggunaan array dapat dikatakan sebagai alat yang sangat berguna untuk mengelola data secara terstruktur dan efisien.



## Referensi
[1] Arraffi, A. (2019). Tipe data larik (array).

[2] Zenda, A. D. (2018). PENGERTIAN ARRAY.

[3] Pratama, M. A. (2020). STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++.

[4] Suganda, R. (2018, July 13). TIPE DATA ARRAY.

[5] lestari, K. (2019, March 29). STUKTUR DATA STATIS ARRAY. 