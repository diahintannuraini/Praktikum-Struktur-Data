# <h1 align="center">Laporan Praktikum Modul Hash Table</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Hash Table:
Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan kunci-nilai. Hash table biasanya terdiri dari dua komponen utama: array (atau vektor) dan fungsi hash. Hashing adalah teknik untuk mengubah rentang nilai kunci menjadi rentang indeks array.
Array menyimpan data dalam slot-slot yang disebut bucket. Setiap bucket dapat menampung satu atau beberapa item data. Fungsi hash digunakan untuk menghasilkan nilai unik dari setiap item data, yang digunakan sebagai indeks array. Dengan cara ini, hash table memungkinkan pencarian data dalam waktu yang konstan (O(1)) dalam kasus terbaik.
Sistem hash table bekerja dengan cara mengambil input kunci dan memetakkannya ke nilai indeks array menggunakan fungsi hash. Kemudian, data disimpan pada posisi indeks array yang dihasilkan oleh fungsi hash. Ketika data perlu dicari, input kunci dijadikan sebagai parameter untuk fungsi hash, dan posisi indeks array yang dihasilkan digunakan untuk mencari data. Dalam kasus hash collision, di mana dua atau lebih data memiliki nilai hash yang sama, hash table menyimpan data tersebut dalam slot yang sama dengan Teknik yang disebut chaining.[1]

### Penggunaan Hash Table:
Hash table dikembangkan dan digunakan karena menawarkan kelebihan dalam efisiensi waktu operasi, mulai dari pengarsipan hingga pencarian data. Contohnya adalah bidang jaringan komputer yang mengembangkannya menjadi hybrid open hash table, yang kemudian dipakai untuk memproses jaringan komputer.

### Penggunaan Hash Function:
Hash function menerima kunci sebagai input dan menghasilkan indeks komponen dalam array yang dikenal sebagai tabel hash. Indeks ini disebut sebagai indeks hash.[2]

### Kelebihan Hash Table:
1. Efisiensi Waktu Operasi

2. Akses Cepat

3. Penyimpanan Data yang Cukup Besar

4. Penyelesaian Collision

### Kekurangan Hash Table:
1. Collision

2. Keterbatasan Ukuran

3. Keterbatasan Kunci[3]

## Guided 

### 1. Guided 

```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
        }
    }
    delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }
   
    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```
### Output:
![output guided 1 hash table](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/99e614ed-9c2c-4cc7-a5e4-bcc73ef152b3)
### Full Screen shoot:
![full ss guided 1 hash table](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/7c57ed0a-9b5d-47e5-8fe5-a2fe82e878d2)
### Interpretasi:
Output program ini menunjukkan hasil pencarian dan traversal pada hash table yang menggunakan teknik chaining untuk mengatasi collision. Pencarian dengan kunci 1 menemukan nilai 10, sedangkan kunci 4 tidak ditemukan dan mengembalikan -1. Traversal menampilkan semua pasangan kunci-nilai dalam tabel hash: "1: 10", "2: 20", dan "3: 30". Program ini memakai fungsi hash sederhana untuk menentukan indeks tabel berdasarkan kunci, dengan struktur data Node yang menyimpan kunci, nilai, dan pointer ke node berikutnya. Kelas HashTable mengimplementasikan metode untuk menambah, mencari, menghapus, dan menampilkan data dalam tabel hash. Dalam fungsi main, data dimasukkan ke tabel hash dengan kunci 1, 2, dan 3 dan nilai masing-masing 10, 20, dan 30. Program ini menunjukkan cara kerja dasar hash table dengan operasi pencarian, penghapusan, dan traversal menggunakan teknik chaining.

### Guided 2
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE;
    }
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);
       
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
    return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
                for (auto pair : table[i]) {
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") << endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") << endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : " <<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;
}
```
### Output:
![output guided 2 hash table](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/603d2756-c38c-4466-8934-adab1c73ccfc)
### Full screen shoot:
![full ss guided 2 hash table](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/2378f749-b65a-4859-b102-5fccb165e0a4)
### Interpretasi:
Output program menunjukkan hasil operasi penyisipan, pencarian, penghapusan, dan traversal pada tabel hash yang menyimpan data nomor telepon. Program berhasil menemukan nomor telepon "Mistah" (1234) dan "Pastah" (5678). Setelah "Mistah" dihapus, program tidak menemukan nomor telepon terkait dengan nama tersebut. Tabel hash ditampilkan dengan "Pastah" (5678) di indeks 4 dan "Ghana" (91011) di indeks 6, sementara indeks lainnya kosong. Program menggunakan fungsi hash sederhana untuk menghitung nilai hash dari nama. Struktur data HashNode menyimpan pasangan nama dan nomor telepon, dan kelas HashMap mengimplementasikan metode untuk operasi pada tabel hash. Data dimasukkan ke tabel hash dengan nama "Mistah", "Pastah", dan "Ghana" dengan nomor telepon masing-masing 1234, 5678, dan 91011. Fungsi searchByName digunakan untuk mencari nomor telepon berdasarkan nama, sementara fungsi print digunakan untuk menampilkan data dalam tabel hash. Program ini menunjukkan cara kerja dasar tabel hash dengan operasi penyisipan, pencarian, penghapusan, dan traversal menggunakan teknik chaining.

## Unguided 

### 1.	Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :

a.	Setiap mahasiswa memiliki NIM dan nilai.

b.	Program memiliki tampilan pilihan menu berisi poin C.

c.	Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).

```C++
#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }

    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Menambahkan data baru
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Mencari data berdasarkan NIM
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Menghapus data berdasarkan NIM
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Mencari data berdasarkan rentang nilai (80-90)
    void search_by_value_range(int min_value, int max_value) {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                if (current->value >= min_value && current->value <= max_value) {
                    cout << "NIM: " << current->key << ", Nilai: " << current->value << endl;
                }
                current = current->next;
            }
        }
    }

    // Traversal untuk menampilkan semua data
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << "NIM: " << current->key << ", Nilai: " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    int choice, nim, nilai;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah data mahasiswa\n";
        cout << "2. Hapus data mahasiswa\n";
        cout << "3. Cari data berdasarkan NIM\n";
        cout << "4. Cari data berdasarkan rentang nilai (80-90)\n";
        cout << "5. Tampilkan semua data\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Nilai: ";
                cin >> nilai;
                ht.insert(nim, nilai);
                break;
            case 2:
                cout << "Masukkan NIM yang akan dihapus: ";
                cin >> nim;
                ht.remove(nim);
                break;
            case 3:
                cout << "Masukkan NIM yang akan dicari: ";
                cin >> nim;
                nilai = ht.get(nim);
                if (nilai != -1) {
                    cout << "Nilai mahasiswa dengan NIM " << nim << " adalah: " << nilai << endl;
                } else {
                    cout << "Data tidak ditemukan." << endl;
                }
                break;
            case 4:
                cout << "Mahasiswa dengan nilai antara 80 dan 90:\n";
                ht.search_by_value_range(80, 90);
                break;
            case 5:
                cout << "Data semua mahasiswa:\n";
                ht.traverse();
                break;
            case 6:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 6);

    return 0;
}
```
### Full Screen Shoot:
![Full ss unguided 1 hash table](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/b6d46b15-0f79-4520-a2d7-876008a13650)
### Output a:
![Output unguided 1 a](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/20dd2ca6-b353-4fb1-8b22-27f3b348a73e)
### Interpetasi:
output dari program ini menampilkan nim beserta nilainya yang telah diinputkan sebelumnya.
### Output b:
![output unguided 1 b](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/074be3e0-eb6c-4e4f-8523-bbaab953b31b)
### Interpretasi:
output ini menampilkan opsi yang akan di gunakan pada poin c dimana ada poin tambah data, hapus data, cari data berdasarkan nim, serta mencari data berdasarkan rentang nilai yang di mulai dari 80-90.
### Output c tambah data:
![output unguided 1 c tambah data](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/00eb7c70-63f4-4f97-b3e9-64ec2a2aa835)
### Interpretasi:
output ini menampilkan hasil dari tambah data ke data yang sudah ada sebelumnya dimana nim 1119 ditambahkan ke dalam list.
### Output c hapus data:
![output unguided 1 c hapus data](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/7c4f4177-c0a1-425b-a22e-6fbfafa795ed)
### Interpretasi:
output ini menampilkan data yang akan dihapus dimana nim 1112 dihapus dari list data yang sudah ada sebelumnya
### output c cari berdasarkan NIM:
![output unguided 1 c cari berdasarkan NIM](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/b5061a08-0af6-42a3-9323-5ee08cc9b80b)
### Interpretasi:
kemudian output ini menampilkan data dimana data di cari dengan memasukan nim untuk menemukan nilainya.
### output c cari berdasarkan rentang nilai(80-100):
![output unguided 1 c cari berdasrakan rentang nilai](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/602b5abc-90cd-4697-9090-1ddbabbf97a4)
### Interpretasi:
selanjutnya untuk output kodingan ini menampilkan data dengan cara mencarinya dengan menggunakan pilihan rentang nilai yang ada pada opsi nomor 4 kemudian program akan menampilkan list yang dimana berisi nim dengan nilai yang berada pada rentang nilai 80 hingga 90.
## Kesimpulan:
Hash table adalah struktur data yang mengelola pasangan kunci-nilai dengan menggunakan array dan fungsi hash. Fungsi hash mengubah kunci menjadi indeks dalam array, memungkinkan pencarian data dengan sangat cepat, umumnya dalam waktu konstan (O(1)) pada situasi ideal. Ketika terjadi hash collision, di mana dua atau lebih kunci menghasilkan indeks yang sama, teknik chaining digunakan untuk menyimpan data dalam slot yang sama. Hash table memiliki beberapa keunggulan, termasuk kecepatan akses, efisiensi waktu operasi, dan kapasitas penyimpanan yang besar. Namun, hash table juga memiliki beberapa kekurangan, seperti kemungkinan terjadinya collision, keterbatasan ukuran, dan keterbatasan pada kunci yang digunakan. Karena keunggulannya dalam pengarsipan dan pencarian data, hash table banyak digunakan dalam berbagai aplikasi, termasuk pemrosesan jaringan komputer.

## Referensi
[1] Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts, problems, Interview Questions. CareerMonk Publications. 

[2] Prestiliano, J. (2007). Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data.

[3] Fasilkom UI - IKI20100 Hash Table by Ruli Manurung & Ade Azurat

