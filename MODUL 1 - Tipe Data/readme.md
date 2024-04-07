Praktikum Alpro
# <h1 align="center">Laporan Praktikum Modul 1 Tipe Data</h1>
<p align="center">2311110046 / Diah Intan Nuraini / Sains Data</p>

## Dasar Teori

Tipe Data adalah sebuah skema organisasi, seperti struktur dan array, yang
diterapkan pada data sehingga data dapat diinterprestasikan dan sehingga operasioperasi spesifik dapat dilaksanakan pada data tersebut. Secara umum jenis-jenis data
dapat dikelompokkan atas 2 bagian, yaitu :
1. Jenis data primitif, terdiri atas : a. Integer b. Real c. Boolean d. Karakter
2. Jenis data campuran, yaitu : "String".

## Guided 

### 1. Tipe Data Primitif
```c++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): "; cin >> op;
    cout << "Enter two operands: "; cin >> num1 >> num2;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2; break;
        case '-': cout << "Result: " << num1 - num2; break;
        case '*': cout << "Result: " << num1 * num2; break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << fixed << setprecision(2) << num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
            } break;
        default: cout << "Error! Operator is not correct";
    }
    return 0;
}
```
### Interpretasi
Program ini adalah program C++ sederhana yang meminta pengguna untuk memasukkan operator matematika (+, -, *, /) dan dua operand. Setelah pengguna memasukkan data tersebut, program akan menggunakan struktur switch-case untuk melakukan operasi matematika yang sesuai tergantung pada operator yang dimasukkan. Jika operator adalah pembagian (/), program akan memeriksa apakah pembaginya bukan nol sebelum melakukan operasi. Jika pembagi adalah nol, maka program akan memberikan pesan kesalahan "Error! Division by zero is not allowed." Kemudian program akan mencetak hasil operasi matematika ke layar dengan menggunakan presisi desimal dua angka setelah koma menggunakan manipulator fixed dan setprecision(2).



### 2. Tipe Data Abstrak
```c++
#include <stdio.h>
using namespace std;
//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{

    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
### Interpretasi
Program di atas digunakan untuk mendefinisikan dan menginisialisasi dua buah struktur yang disebut Mahasiswa. Struktur Mahasiswa memiliki tiga anggota yaitu name, address, dan age yang masing-masing bertipe data pointer ke const char * dan int.

Setelah mendefinisikan struktur, program kemudian mendeklarasikan dua variabel mhs1 dan mhs2 yang bertipe data Mahasiswa untuk merepresentasikan dua mahasiswa. Selanjutnya, nilai-nilai untuk masing-masing atribut dari kedua variabel tersebut diisikan dengan menggunakan operator penugasan.

Setelah itu, program mencetak informasi tentang masing-masing mahasiswa ke layar menggunakan fungsi printf(). Setiap informasi dipisahkan dengan tanda newline (\n) untuk membuat tata letak cetakan menjadi lebih teratur.

Setelah semua informasi dicetak, program mengembalikan nilai 0 yang menandakan bahwa program telah berjalan dengan sukses dan kemudian program selesai dieksekusi.

### 3. Tipe Data Koleksi
```c++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    // mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
### Interpretasi
mendeklarasikan nilai dengan panjang 5 dan tipe data integer, menginisialisasi nilai nilai dalam array nilai, mencetak nilai nilai dari setiap elemen dalam array menggunakan perintah cout serta menagkhiri program dengan nilai kembali 0.
 
## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

#### Input:
```c++
#include <iostream>
using namespace std;

int keliling(int lebar, int panjang){
    return 2 * (panjang + lebar);
}

int luas(int lebar, int panjang){
    return panjang * lebar;
}

int main(){
    int panjang, lebar,  intancantik;

    cout << "\nHITUNG PERSEGI PANJANG\n";
    cout << "\nMasukkan panjang   : "; cin >> panjang;
    cout << "\nMasukkan lebar     : "; cin >> lebar;
    cout << "\nPilih Menu\n";
    cout << "1. Hitung Keliling\n";
    cout << "2. Hitung Luas\n";
    cout << "\nMasukkan Pilihan: "; cin >> intancantik;

    switch (intancantik)
    {
    case 1: cout << "\nHasil           : " << keliling(panjang, lebar); break;
    case 2: cout << "\nHasil           : " << luas(panjang, lebar); break;
    default: cout << "\nMaaf, pilihan Anda salah!";
    }

    return 0;
}
```
#### Output:
![Capture](https://github.com/diahintannuraini/praktikumalpro/assets/162097079/364c04bd-d014-4453-a189-e07c86ba11da)

Penjelasan program: 
Program tersebut merupakan program sederhana untuk menghitung keliling dan luas persegi panjang. Program ini memiliki dua fungsi yaitu keliling dan luas yang menerima dua parameter yaitu lebar dan panjang, dan mengembalikan nilai keliling dan luas persegi panjang sesuai rumus yang telah ditentukan.

Pada bagian main, program akan meminta pengguna untuk memasukkan panjang dan lebar persegi panjang. Selanjutnya, program akan menampilkan pilihan menu untuk menghitung keliling atau luas persegi panjang. Pengguna akan diminta untuk memilih menu dengan memasukkan angka 1 atau 2.

Setelah pengguna memasukkan pilihan, program akan menggunakan struktur switch-case untuk mengeksekusi fungsi yang sesuai berdasarkan pilihan pengguna. Jika pengguna memilih 1, maka program akan menghitung dan menampilkan keliling persegi panjang menggunakan fungsi keliling. Jika pengguna memilih 2, maka program akan menghitung dan menampilkan luas persegi panjang menggunakan fungsi luas. Jika pengguna memasukkan pilihan lain selain 1 atau 2, maka program akan menampilkan pesan bahwa pilihan yang dimasukkan salah.

Setelah menampilkan hasil, program akan selesai dan keluar.

#### Full Screenshoot:
![Capture 2](https://github.com/diahintannuraini/praktikumalpro/assets/162097079/eefa8195-2e3d-4845-b5fe-caef101a8501)


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya
Class dan struct adalah dua konsep dalam pemrograman yang digunakan untuk mengorganisir data dan fungsi ke dalam satu kesatuan. Class menyediakan cara untuk mendefinisikan tipe data baru dengan variabel dan fungsi terkait, dengan default aksesibilitas anggota yang privat, sementara struct mengelompokkan variabel dengan tipe data yang berbeda tanpa perlu menggunakan antarmuka publik, dengan default aksesibilitas anggota yang publik. Perbedaan utama antara keduanya terletak pada cara default aksesibilitas anggota yang berbeda, yang mempengaruhi bagaimana data dan fungsi diakses dan dimanipulasi dari luar struktur data tersebut. Dalam prakteknya, keduanya dapat digunakan untuk tujuan yang sama, tergantung pada kebutuhan dan preferensi desain pemrograman.

#### Input:
 ```c++
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Struct untuk merepresentasikan mata kuliah
struct Course {
    string name;
    int credits;
    float grade;
};

// Class untuk merepresentasikan mahasiswa
class Student {
private:
    string name;
    int id;
    vector<Course> courses;

public:
    // Constructor
    Student(string n, int i) : name(n), id(i) {}

    // Method untuk menambahkan mata kuliah yang diambil oleh mahasiswa
    void addCourse(string courseName, int credits, float grade) {
        Course c = {courseName, credits, grade};
        courses.push_back(c);
    }

    // Method untuk menghitung total skor kredit yang diambil oleh mahasiswa
    int totalCredits() {
        int total = 0;
        for (Course c : courses) {
            total += c.credits;
        }
        return total;
    }

    // Method untuk menghitung IPK (Indeks Prestasi Kumulatif) mahasiswa
    float calculateGPA() {
        float totalPoints = 0.0;
        int totalCredits = 0;
        for (Course c : courses) {
            totalPoints += c.grade * c.credits;
            totalCredits += c.credits;
        }
        return totalPoints / totalCredits;
    }

    // Method untuk menampilkan informasi mahasiswa dan mata kuliah yang diambil
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Courses:" << endl;
        for (Course c : courses) {
            cout << "- " << c.name << " (" << c.credits << " credits), Grade: " << c.grade << endl;
        }
        cout << "Total Credits: " << totalCredits() << endl;
        cout << "GPA: " << calculateGPA() << endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Student student("Sudol", 123456);

    // Menambahkan mata kuliah yang diambil oleh mahasiswa
    student.addCourse("Matematika", 4, 3.5);
    student.addCourse("Fisika", 3, 3.0);
    student.addCourse("Komputer", 3, 4.0);

    // Menampilkan informasi mahasiswa dan mata kuliah yang diambil
    student.displayInfo();

    return 0;
}
```
#### Output : 
![Capture 3](https://github.com/diahintannuraini/praktikumalpro/assets/162097079/30dcfd66-49a0-4c01-9f43-2c36687d6c97)

Program ini adalah program yang menggunakan struct dan class untuk merepresentasikan data mahasiswa dan mata kuliah yang diambil oleh mahasiswa. Struct Course digunakan untuk merepresentasikan mata kuliah dengan atribut nama, jumlah kredit, dan nilai. Class Student digunakan untuk merepresentasikan mahasiswa dengan atribut nama, ID, dan vektor mata kuliah yang diambil. Program ini memiliki beberapa method, seperti addCourse untuk menambahkan mata kuliah, totalCredits untuk menghitung total skor kredit yang diambil, calculateGPA untuk menghitung IPK mahasiswa, dan displayInfo untuk menampilkan informasi mahasiswa dan mata kuliah yang diambil. Pada main function, sebuah objek mahasiswa dibuat, beberapa mata kuliah ditambahkan, dan informasi mahasiswa ditampilkan.

#### Full Screenshoot
![Capture 4](https://github.com/diahintannuraini/praktikumalpro/assets/162097079/fe502fb7-30ce-457a-ab9d-ccf5afef2de7)

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari

#### Input:
```c++
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int>beras;
    beras["merah"] = 200000;
    beras["hitam"] = 300000;
    beras["porang"] = 500000;

    cout << "\nTipe beras merah memiliki harga    : " <<  beras["merah"];
    cout << "\nTipe beras hitam memiliki harga    : " <<  beras["hitam"];
    cout << "\nTipe beras porang memiliki harga: " <<  beras["porang"];

    string intancantikbanget;
    cout << "\n\nCek Tipe beras: "; cin >> intancantikbanget;
    if(beras.find(intancantikbanget) != beras.end()){
        cout << "\nStok tersedia, silahkan tanya penjual." << endl;
        } else{
        cout << "\nStok tidak tersedia, silahkan kembali besok." << endl;
    }
    
    return 0;
}
```
#### Output:
![Capture 5](https://github.com/diahintannuraini/praktikumalpro/assets/162097079/2b771839-09c5-4732-af97-5892cb5a1639)

Program ini bertujuan untuk memanfaatkan struktur data map, Pertama-tama, kita mengimpor pustaka yang diperlukan, yaitu <iostream> untuk input-output dan <map> untuk menggunakan struktur data map. Kemudian, kita mendefinisikan map dengan nama beras, di mana jenis beras disimpan sebagai kunci (dalam bentuk string) dan harga jualnya sebagai nilai (dalam bentuk integer).

Langkah selanjutnya adalah mengisi map beras dengan beberapa entri. Dalam contoh ini, beras merah, hitam, dan porang dimasukkan ke dalam map bersama dengan harga jualnya.

Setelah itu, program menampilkan harga beras merah, hitam, dan porang menggunakan operator indeks pada map beras, yang memungkinkan akses ke nilai berdasarkan kunci.

Program kemudian meminta pengguna untuk memasukkan jenis beras yang ingin dicek ketersediaannya. Penggunaan fungsi find() digunakan untuk memeriksa apakah jenis beras yang dimasukkan oleh pengguna ada dalam map beras. Jika jenis beras tersebut ditemukan dalam map, program akan memberikan pesan yang menunjukkan bahwa stok tersedia dan menginstruksikan pengguna untuk bertanya kepada penjual. Namun, jika jenis beras tersebut tidak ditemukan, program akan memberikan pesan yang menyatakan bahwa stok tidak tersedia dan menyarankan pengguna untuk kembali besok.

Dengan demikian, program ini memberikan contoh sederhana tentang bagaimana struktur data map dapat digunakan untuk mengelola dan memanipulasi informasi dengan cara yang efisien dalam bahasa pemrograman C++.

#### Full Screenshoot
![Capture 6](https://github.com/diahintannuraini/praktikumalpro/assets/162097079/f5c8b3af-28e0-4e75-a98f-13deefaa49c0)

## Kesimpulan
Kesimpulannya, program-program tersebut memiliki tujuan dan fungsionalitas yang beragam dalam memanfaatkan fitur-fitur bahasa pemrograman C++. Program pertama bertujuan untuk melakukan perhitungan sederhana terkait keliling dan luas persegi panjang, dengan memanfaatkan struktur switch-case untuk memilih operasi yang diinginkan oleh pengguna. Program kedua menggunakan struktur data struct dan class untuk mengorganisir informasi tentang mahasiswa dan mata kuliah, serta menyediakan berbagai method untuk mengelola data tersebut. Sementara itu, program ketiga memanfaatkan struktur data map untuk menyimpan informasi harga dan jenis beras, yang kemudian dapat digunakan untuk memeriksa ketersediaan stok beras berdasarkan jenisnya. Secara keseluruhan, ketiga program tersebut memberikan contoh konkret tentang berbagai cara untuk menggunakan fitur-fitur bahasa pemrograman C++ dalam pengembangan perangkat lunak yang beragam dan memenuhi kebutuhan yang berbeda.

## Referensi
[1] Sianipar, R. H. (2014). Pemrograman C++ Untuk Pemula (Vol. 1). Penerbit INFORMATIKA.

[2] Huda, A., Ardi, N., & Muabi, A. (2021). Pengantar Coding Berbasis C/C++. UNP PRESS.