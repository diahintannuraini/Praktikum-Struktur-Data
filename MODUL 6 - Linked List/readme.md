# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori

### Pengertian Linked list:
Struktur data dinamis yang paling sederhana yaitu Linked List atau struktur berkait, yaitu cara
penyimpanan data secara terstruktur, sehingga pemrogram dapat secara otomatis menciptakan
suatu tempat baru untuk menyimpan data kapan saja diperlukan. (Yosef Murya K.A., ST.,
M.Kom, 2013). Linked list (senarai berantai) disebut juga senarai satu arah (One Way List). Masing-masing komponen dinamakan dengan simpul (node) Linked list mengandung tiga buah simpul atau node. Sebuah pointer menunjuk simpul terkiri dan
setiap simpul mempunyai pointer yang menunjuk ke simpul berikutnya. Pointer pada simpul terakhir tidak menunjuk ke mana-mana, maka berisi NULL.
Simpul pada Linked list terdiri dari dua komponen utama, yaitu :
1. Data, yaitu bisa berupa satu elemen data atau beberapa elemen data
2. Pointer yang menunjuk ke simpul lain[1]

### A.Linked List (Senarai berantai)
Linked List (Senarai berantai)Senarai berantai(bahasa Inggris:linked list) atau kadang-kadang disebut dengan senarai bertaut atau daftar bertaut dalam ilmu computer merupakan sebuah struktur data yang digunakan untuk menyimpan sejumlah objek data biasanya secara terurut sehingga memungkinkan penambahan, pengurangan, danpencarian atas elemen data yang tersimpan dalam senarai dilakukan secara lebih efektif.Pada praktiknya sebuah struktur data memiliki elemen yang digunakan untuk saling menyimpan rujukan antara satu dengan lainnya sehingga membentuk sebuah senarai abstrak, tiap-tiap elemen yang terdapat pada senarai abstrak ini seringkali disebut sebagai node. karena mekanisme rujukan yang saling terkait inilah disebut sebagai senarai berantai. Sebuah senarai berantai dengan tiap-tiap node yang terdiri atas dua elemen, data integer, dan elemen rujukan ke node berikutnya. Senarai berantai (linked list) terdiri dari dua bagian yaitu senarai berantai satu arah atau biasa disebut single linked list ,dan senarai berantai dua arah atau double linked list. 

### B. Perbedaan single linked listdan double linked list
Seperti yang kita ketahui bahwa senarai itu memiliki duaj enis yaitu senarai berantai satuarah (senarai tunggal) atau singel linked list dan senarai berantai dua arah atau double linked list.S enarai satu arah yaitu bila struktur data sebuah node hanya memiliki satu tautan atasnode berikutnya dalam sebuah senarai, maka senarai tersebut dinamakan sebagai senarai tunggal. Senarai tunggal dengan tiap-tiap node yang terdiri atas dua elemen, data integer, dan elemen rujukan ke node berikutnya.Pada dasarnya, penggunaan Double Linked List hampir sama dengan penggunaan Single Linked List yang telah kita pelajari pada materi sebelumnya. Hanya saja Double Linked List menerapkan sebuah pointer baru, yaitu prev, yang digunakan untuk menggeser mundur selain tetap mempertahankan pointer next. Berbeda halnya dengan senarai tunggal, pada senarai dua arah (singel linked list), struktur data atas tiap-tiap node memiliki rujukan pada node sebelum dan berikutnya. Sebagian algoritma membutuhkan taut ganda, contohnya sorting dan reverse traversing. Senarai [2]

### Operasi pada Single Linked List dan Double Linked List:
1.Sisip  Depan  :  menyisipkan  node  baru  pada  bagian  awalnode  atau headdari Single Linked List.
2.Sisip Belakang : menyisipkan node baru pada bagian belakang node dari Single Linked List.
3.Sisip Posisi : menyisipkan node baru pada posisi tertentu dari Single Linked List.
4.Hapus Posisi : menghapus node baru pada posisi tertentu dari Single Linked List.[3]


## Guided 

###  1. Linked List Non Circular 

```C++
#include <iostream> 
using namespace std; 

// Deklarasi Struct Node 
struct Node { 
    int data; 
    Node *next; 
}; 

Node *head; 
Node *tail; 

// Inisialisasi Node 
void init() { 
    head = NULL; 
    tail = NULL; 
} 

// Pengecekan apakah Linked List kosong
bool isEmpty() { 
    return head == NULL; 
} 

// Tambah Node di Depan 
void insertDepan(int nilai) { 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 

    if (isEmpty() == true) { 
        head = tail = baru; 
    } else { 
        baru->next = head; 
        head = baru; 
    } 
} 

// Tambah Node di Belakang 
void insertBelakang(int nilai) { 
    Node *baru = new Node; 
    baru->data = nilai; 
    baru->next = NULL; 

    if (isEmpty() == true) { 
        head = tail = baru; 
    } else { 
        tail->next = baru; 
        tail = baru; 
    } 
} 

// Hitung Jumlah Node 
int hitungList() { 
    Node *hitung = head; 
    int jumlah = 0; 

    while (hitung != NULL) { 
        jumlah++; 
        hitung = hitung->next; 
    } 

    return jumlah; 
} 

// Tambah Node di Tengah 
void insertTengah(int data, int posisi) { 
    if (posisi < 1 || posisi > hitungList()) { 
        cout << "Posisi diluar jangkauan" << endl; 
    } else if (posisi == 1) { 
        cout << "Posisi bukan posisi tengah" << endl; 
    } else { 
        Node *baru, *bantu; 
        baru = new Node(); 
        baru->data = data; 

        bantu = head; 
        int nomor = 1; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 

        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Node di Depan 
void hapusDepan() { 
    Node *hapus; 
    if (isEmpty() == false) { 
        hapus = head; 
        head = head->next; 
        delete hapus; 
    } else { 
        cout << "List kosong!" << endl; 
    } 
} 

// Hapus Node di Belakang 
void hapusBelakang() { 
    Node *hapus; 
    Node *bantu; 
    if (isEmpty() == false) { 
        if (head != tail) { 
            hapus = tail; 
            bantu = head; 
            while (bantu->next != tail) { 
                bantu = bantu->next; 
            } 
            tail = bantu; 
            tail->next = NULL; 
        } else { 
            hapus = head; 
            head = tail = NULL; 
        } 
        delete hapus; 
    } else { 
        cout << "List kosong!" << endl; 
    } 
} 

// Hapus Node di Tengah 
void hapusTengah(int posisi) { 
    Node *bantu, *hapus, *sebelum; 
    if (posisi < 1 || posisi > hitungList()) { 
        cout << "Posisi di luar jangkauan" << endl; 
    } else if (posisi == 1) { 
        cout << "Posisi bukan posisi tengah" << endl; 
    } else { 
        int nomor = 1; 
        bantu = head; 
        while (nomor <= posisi) { 
            if (nomor == posisi - 1) { 
                sebelum = bantu; 
            } 
            if (nomor == posisi) { 
                hapus = bantu; 
            } 
            bantu = bantu->next; 
            nomor++; 
        } 
        sebelum->next = bantu; 
        delete hapus; 
    } 
} 

// Ubah Data Node di Depan 
void ubahDepan(int data) { 
    if (isEmpty() == false) { 
        head->data = data; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Ubah Data Node di Tengah 
void ubahTengah(int data, int posisi) { 
    Node *bantu; 
    if (isEmpty() == false) { 
        if (posisi < 1 || posisi > hitungList()) { 
            cout << "Posisi di luar jangkauan" << endl; 
        } else if (posisi == 1) { 
            cout << "Posisi bukan posisi tengah" << endl; 
        } else { 
            bantu = head; 
            int nomor = 1; 
            while (nomor < posisi) { 
                bantu = bantu->next; 
                nomor++; 
            } 
            bantu->data = data; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Ubah Data Node di Belakang 
void ubahBelakang(int data) { 
    if (isEmpty() == false) { 
        tail->data = data; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Seluruh Node 
void clearList() { 
    Node *bantu, *hapus; 
    bantu = head; 
    while (bantu != NULL) { 
        hapus = bantu; 
        bantu = bantu->next; 
        delete hapus; 
    } 
    head = tail = NULL; 
    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan Isi Linked List 
void tampil() { 
    Node *bantu; 
    bantu = head; 
    if (isEmpty() == false) { 
        while (bantu != NULL) { 
            cout << bantu->data << ends; 
            bantu = bantu->next; 
        } 
        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan(3); 
    tampil(); 
    insertBelakang(5); 
    tampil(); 
    insertDepan(2); 
    tampil(); 
    insertDepan(1); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    insertTengah(7, 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    ubahDepan(1); 
    tampil(); 
    ubahBelakang(8); 
    tampil(); 
    ubahTengah(11, 2); 
    tampil(); 

    return 0; 
}
```
### Output:
![Guided 1 Linkedlist non circular](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/f3ad2202-63b1-4889-95db-4f047db90d97)

### Interpretasi:
Output tersebut mencerminkan serangkaian operasi pada sebuah linked list. Nilai 3 dimasukkan di depan, diikuti dengan nilai 5 di belakangnya. Kemudian, nilai 2 dimasukkan di depan, menggeser nilai 3 ke posisi kedua. Node pertama dihapus, lalu node terakhir juga dihapus. Nilai 7 dimasukkan di posisi kedua, tetapi kemudian node kedua dihapus. Node pertama diubah menjadi 1 dan node terakhir menjadi 8. Namun, percobaan mengubah nilai node kedua menjadi 11 menghasilkan pesan kesalahan karena tidak ada node kedua dalam linked list yang hanya memiliki dua node.

#### 2.Linked List Circular 
```C++
#include <iostream>
using namespace std;

///PROGRAM DOUBLE LINKED LIST
class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

### Output:
![Guided 2 laprak 6](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/6128f4cd-7419-46b2-9033-e58cab3f770d)

### Interpretasi:
Output tersebut adalah menu interaktif untuk mengelola sebuah double linked list. Pengguna diberikan enam pilihan: "Add data" untuk menambahkan data ke linked list, "Delete data" untuk menghapus data dari linked list, "Update data" untuk mengubah data yang ada dengan data baru, "Clear data" untuk menghapus semua data dari linked list, "Display data" untuk menampilkan seluruh data dalam linked list, dan "Exit" untuk keluar dari program. Setiap pilihan memicu fungsi yang sesuai pada kelas DoublyLinkedList, seperti menambahkan data baru, menghapus data, mengubah data, atau menampilkan data. Program akan berjalan terus menerus hingga pengguna memilih untuk keluar.

### 3. Single linked list circular
```C++
#include <iostream> 
using namespace std; 
/// PROGRAM SINGLE LINKED LIST CIRCULAR
// Deklarasi Struct Node 
struct Node { 
    string data; 
    Node *next; 
}; 

Node *head, *tail, *baru, *bantu, *hapus; 

void init() { 
    head = NULL; 
    tail = head; 
} 

// Pengecekan apakah Linked List kosong 
int isEmpty() { 
    return head == NULL; 
} 

// Buat Node Baru 
void buatNode(string data) { 
    baru = new Node; 
    baru->data = data; 
    baru->next = NULL; 
} 

// Hitung Jumlah Node 
int hitungList() { 
    bantu = head; 
    int jumlah = 0; 
    while (bantu != NULL) { 
        jumlah++; 
        bantu = bantu->next; 
    } 
    return jumlah; 
} 

// Tambah Node di Depan 
void insertDepan(string data) { 
    buatNode(data); 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 
        baru->next = head; 
        head = baru; 
        tail->next = head; 
    } 
} 

// Tambah Node di Belakang 
void insertBelakang(string data) { 
    buatNode(data); 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 
        tail->next = baru; 
        baru->next = head; 
    } 
} 

// Tambah Node di Tengah 
void insertTengah(string data, int posisi) { 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        baru->data = data; 
        int nomor = 1; 
        bantu = head; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 
        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Node di Depan 
void hapusDepan() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 
            head = head->next; 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Node di Belakang 
void hapusBelakang() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (hapus->next != head) { 
                hapus = hapus->next; 
            } 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Node di Tengah 
void hapusTengah(int posisi) { 
    if (isEmpty() == 0) { 
        int nomor = 1; 
        bantu = head; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 
        hapus = bantu->next; 
        bantu->next = hapus->next; 
        delete hapus; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Seluruh Node 
void clearList() { 
    if (head != NULL) { 
        hapus = head->next; 
        while (hapus != head) { 
            bantu = hapus->next; 
            delete hapus; 
            hapus = bantu; 
        } 
        delete head; 
        head = NULL; 
    } 
    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan Isi Linked List 
void tampil() { 
    if (isEmpty() == 0) { 
        tail = head; 
        do { 
            cout << tail->data << ends; 
            tail = tail->next; 
        } while (tail != head); 
        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan("Ayam"); 
    tampil(); 
    insertDepan("Bebek"); 
    tampil(); 
    insertBelakang("Cicak"); 
    tampil(); 
    insertBelakang("Domba"); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    insertTengah("Sapi", 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    return 0; 
}
```



### Output: 
![Guided 3 Laprak 6](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/97dc0b13-b836-47c5-80e0-12755e676eaf)

### Interpretasi:
Output tersebut mencerminkan hasil dari beberapa operasi pada sebuah single linked list yang berputar. Dimulai dengan kata "Ayam" yang dimasukkan ke dalam list, diikuti oleh "Bebek" yang diletakkan di depannya dan "Cicak" di belakangnya. Selanjutnya, "Domba" dimasukkan setelah "Cicak", menggantikan "Cicak" yang dihapus dari list. Kemudian, node terakhir, yaitu "Domba", dihapus, serta node pertama "Bebek" juga dihapus. Setelah itu, kata "Sapi" dimasukkan di posisi kedua, namun kemudian dihapus kembali. Akhirnya, linked list berisi kata "AyamCicak".

## Unguided :

### 1. Buatlah menu untuk menambahkan, mengubah, menghapus, dan melihat Nama dan  NIM mahasiswa, berikut contoh tampilan output dari nomor 1: 

```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return head == NULL;
}

// Tambah Data di Depan Linked List
void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang Linked List
void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah Linked List
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

// Ubah Data di Depan Linked List
void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah Linked List
void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

// Ubah Data di Belakang Linked List
void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Depan Linked List
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Belakang Linked List
void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Tengah Linked List
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

// Hapus Seluruh Data Linked List
void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampil Data Linked List
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}
```
### Output:
![Unguided 1 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/58e54e1a-0935-466d-a726-88c2e1888fec)

### Interpretasi:
Output tersebut adalah hasil dari interaksi pengguna dengan program single linked list non-circular. Program ini memungkinkan pengguna untuk menambah, mengubah, menghapus, dan menampilkan data mahasiswa. Pengguna diminta untuk memilih operasi yang diinginkan dari menu yang disediakan. Setelah pengguna memilih operasi, program akan mengeksekusi fungsi yang sesuai dan memberikan respons berupa pesan hasil operasi. Jika pengguna memilih untuk keluar dari program, maka program akan berhenti dan menampilkan pesan "Terima kasih!". Dengan demikian, output tersebut mencerminkan interaksi pengguna dengan linked list melalui program yang telah dibuat menggunakan kodingan tersebut.

### 2. Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu  tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau tengah) 
```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return head == NULL;
}

// Tambah Data di Depan Linked List
void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang Linked List
void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah Linked List
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

// Ubah Data di Depan Linked List
void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah Linked List
void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

// Ubah Data di Belakang Linked List
void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Depan Linked List
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Belakang Linked List
void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Tengah Linked List
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

// Hapus Seluruh Data Linked List
void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampil Data Linked List
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}

```
### Output:
![Unguided 2 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/60dbdc86-22b2-473c-a2f7-7450de767a7b)

### 3. Lakukan perintah berikut: 

a) Tambahkan data berikut diantara Farrel dan Denis: 
Wati 2330004 

b) Hapus data Denis 

c) Tambahkan data berikut di awal: 
Owi 2330000 

d) Tambahkan data berikut di akhir: 
David 23300100 

e) Ubah data Udin menjadi data berikut: 
Idin 23300045 

f) Ubah data terkahir menjadi berikut: 
Lucy 23300101 

g) Hapus data awal 

h) Ubah data awal menjadi berikut: 
Bagas 2330002 

i) Hapus data akhir 

j) Tampilkan seluruh data


```C++
#include <iostream>
#include <string>
using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// Inisialisasi Node
void init() {
    head = NULL;
    tail = NULL;
}

// Pengecekan apakah linked list kosong
bool isEmpty() {
    return head == NULL;
}

// Tambah Data di Depan Linked List
void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Data di Belakang Linked List
void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Tambah Data di Tengah Linked List
void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

// Ubah Data di Depan Linked List
void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Data di Tengah Linked List
void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

// Ubah Data di Belakang Linked List
void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Depan Linked List
void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Belakang Linked List
void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Data di Tengah Linked List
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

// Hapus Seluruh Data Linked List
void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

// Tampil Data Linked List
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}
```
#### Output:
a.) ![Output Unguided 3 (a)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/292f6ded-8022-4fad-b170-5233d15951a7)

### Interpretasi:
kodingan ini meminta untuk menambahkan nama wati dengan nim 23300004 diantara nama farrel dan denis menggunakan opsi tambah tengah yang ada pada pilihan nomor 3 kemudian diminta untuk memasukan nama lalu nim serta posisi penambahan. setelah itu dapat di cek apakah nama tersebut sudah ditambahkan atau belum dengan cara memilih opsi tampilkan.

b.) ![Output Unguided 3 (b)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/369ccb6b-1e37-46ef-8bcb-69715d5e6157)

### Interpretasi:
kodingan ini meminta untuk menghapus data denis dengan cara memilih opsi hapus tengah yang ada pada pilihan nomor 9 kemudian diminta untuk memasukan posisi penghapusan.

c.) ![Output Unguided 3 (c)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/0d3cfa73-443a-48ad-b203-1d099372c853)

### Interpretasi:
pada kodingan ini diminta untuk menambahkan data owi dengan nim 2330000 pada awal yaitu dengan cara memilih opsi tambah depan yang ada pada pilihan nomor 1 kemudian masukan nama serta nim nya.

d.) ![Output Unguided 3 (d)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/1e29a737-2ea8-4fa1-88cb-89464077a08e)

### Interpretasi:
kodingan ini meminta untuk menambahkan data david dengan nim 23300100 pada bagian akhir yaitu dengan cara memilih opsi tambah belakang yang ada pada pilihan nomor 2 kemudian tinggal masukan nama serta nim yang akan ditambahkan.

e.) ![Output Unguided 3 (e)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/c7be764d-7166-47f2-ba19-4a93eb277651)

### Interpretasi:
kodingan ini meminta untuk mengubah data yang sebelumnya udin menjadi idin dengan nim 23300045 dengan cara memilih opsi ubah tengah yang ada pada pilihan nomor 6 yang kemudian pilih posisi pengubahan lalu masukan nama serta nim yang akan diubah.

f.) ![Output Unguided 3 (f)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/84a0b4df-dbe1-4da1-9c6f-2ec355e7fc50)

### Interpretasi:
selanjutnya diminta untuk mengubah data terakhir yang sebelumnya david menjadi lucy dengan nim 23300101 yang dilakukan dengan cara memilih opsi ubah belakang yang ada pada pilihan nomor 5, kemudian masukan nim serta nama yang akan diubah.

g.) ![Output Unguided 3 (g)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/8ed2c594-9f8e-4ef4-9d29-891e0ee370f6)

### Interpretasi:
kemudian diminta untuk menghapus data awal yaitu owi dengan cara memilih opsi hapus depan yang ada pada pilihan nomor 7.

h.) ![Output Unguided 3 (h)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/e9d2b881-2220-4e3e-92bc-ef7deb8d94ff)

### Interpretasi:
diminta untuk mengubah data awal yang sebelumnya jawad menjadi bagas dengan nim 2330002 dengan cara memilih opsi ubah depan yang ada pada pilihan nomor 4 kemudian selanjutnya memasukan nama serta nim yang akan diubah.

i.) ![Output Unguided 3 (i)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/56df75b0-de53-4dee-916d-ae46380fd789)

### Interpretasi:
kemudian diminta untuk menghapus data awal yang sebelumnya jawad menjadi bagas dengan nim 2330002 dengan cara memilih opsi ubah depan yang ada pada pilihan nomor 4, kemudian masukan data yang akan diubah. 

j.) ![Output Unguided 3 (j)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/123e5fd5-c858-408e-8624-a3ebb2390ee2)

### Interpretasi:
berikut adalah hasil setelah melakukan perintah sebelumnya.



## Kesimpulan
linked list merupakan sebuah struktur data yang digunakan untuk menyimpan sejumlah objek data biasanya secara terurut sehingga memungkinkan penambahan, pengurangan, dan pencarian atas elemen data yang tersimpan dalam senarai dilakukan secara lebih efektif. Linked list memiliki dua jenis yaitu singel linked list dan double linked list

## Referensi
[1] Siregar, A. A. N. (2019, April 25). Pengertian Linked Object. https://doi.org/10.31219/osf.io/dmwr3
[2] SUDARSO, S. T. I. K. Y. LAPORAN PRAKTIKUM PROGRAM POINTER & LINKED LIST PADA PHP.
[3] Dharma, A. (2018). Aplikasi Pembelajaran Linked List Berbasis Mobile Learning. Riau Journal Of Computer Science, 4(1), 1-11.