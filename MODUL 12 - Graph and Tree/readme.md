# <h1 align="center">Laporan Praktikum Modul Graph and Tree</h1>
<p align="center">Diah Intan Nuraini</p>

## Dasar Teori
### Pengertian Graph and Tree:

 1.	Graph:
 Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. 
 2.	Tree atau Pohon:
 Dalam ilmu komputer, pohon/tree adalah struktur data yang sangat umum dan kuat yang menyerupai nyata pohon. Ini terdiri dari satu set node tertaut yang terurut dalam grafik yang terhubung, dimana setiap node memiliki paling banyak satu simpul induk, dan nol atau lebih simpul anak dengan urutan tertentu. Struktur data tree digunakan untuk menyimpan data-data hirarki seperti pohon keluarga, skema pertandingan, struktur organisasi. 



### Jenis-jenis Graph:
a.	Graph berarah (directed graph): Urutan simpul mempunyai arti. Misal busur AB adalah e1 sedangkan busur BA adalah e8.

b.	Graph tak berarah (undirected graph): Urutan simpul dalam sebuah busur tidak diperhatikan. Misal busur e1 dapat disebut busur AB atau BA.

c.	Weight Graph : Graph yang mempunyai nilai pada tiap edgenya.

### Operasi pada Tree:
a.	Create: digunakan untuk membentuk binary tree baru yang masih kosong.

b.	Clear: digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada binary tree.

c.	isEmpty: digunakan untuk memeriksa apakah binary tree masih kosong atau tidak.

d.	Insert: digunakan untuk memasukkan sebuah node kedalam tree.

e.	Find: digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree tidak boleh kosong.

f.	Update: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree tidak boleh kosong. 

g.	Retrive: digunakan untuk mengetahui isi dari node yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.

h.	Delete Sub: digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.

i.	Characteristic: digunakan untuk mengetahui karakteristik dari suatu tree. Yakni size, height, serta average lenght-nya.

j.	Traverse: digunakan untuk mengunjungi seluruh node-node pada tree dengan cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini yakni Pre-Order, In-Order, dan Post-Order.
 1.	Pre-Order
    Penelusuran secara pre-order memiliki alur:

a.	Cetak data pada simpul root

b.	Secara rekursif mencetak seluruh data pada subpohon kiri

c.	Secara rekursif mencetak seluruh data pada subpohon kanan [1]


Sebuah pohon biner T dapat didefinisikan sebagai sekumpulan terbatas dari elemen-elemen yang disebut nodes/simpul dimana :

a. T dikatakan kosong (disebut null tree/ pohon null atau empty tree/pohon kosong)

b. T terdiri dari sebuah node khusus yang dipanggil R, disebut root dari T dan nodenode T lainnya membentuk sebuah pasangan terurut dari binary tree T1 dan T2 yang tidak berhubungan yang kemudian dipanggil subtree kiri dan subtree kanan.[2]

###  Jenis-jenis binary tree :
1. Complete Binary Tree
Suatu binary tree T akan disebut complete/lengkap jika semua levelnya memiliki child 2 buah kecuali untuk level paling akhir. Tetapi pada akhir level setiap leaf/daun muncul terurut dari sebelah kiri.
2. Extended Binary Tree : 2-Tree
Sebuah binary tree dikatakan 2-tree atau extended binary tree jika tiap simpul N memiliki 0 atau 2 anak. Simpul dengan 2 anak disebut dengan simpul internal (internal node), dan simpul dengan 0 anak disebut dengan external node. Kadang-kadang dalam diagram node node tersebut dibedakan dengan menggunakan tanda lingkaran untuk internal node dan kotak untuk eksternal node.[3]



## Guided 

### 1. Guided 

```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0,7,8,0,0,0,0},
    {0,0,5,0,0,15,0},
    {0,6,0,0,5,0,0},
    {0,5,0,0,2,4,0},
    {23,0,0,10,0,0,8},
    {0,0,0,0,7,0,3},
    {0,0,0,0,9,4,0}
};

void tampilanGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << " " << simpul[kolom] << " (" << busur[baris][kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilanGraph();
    return 0;
}
```
### Output:
![output guided 1 graph and tree](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/37c4f805-a483-4bf1-bd14-483448a6878d)
### Full Screen shoot:
![Full ss guided 1graph and tree](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/ab59457c-2c85-4002-a1fb-e4d80dc197e4)
### Interpretasi:
Program ini menggambarkan sebuah graf yang menunjukkan hubungan antar kota di Indonesia beserta bobotnya. Ada tujuh kota yang diwakili sebagai simpul, yaitu Ciamis, Bandung, Bekasi, Tasikmalaya, Cianjur, Purwokerto, dan Yogyakarta. Koneksi antar kota ditunjukkan dengan bobot tertentu yang bisa diartikan sebagai jarak atau biaya perjalanan. Dari output yang dihasilkan, Ciamis terhubung ke Bandung dengan bobot 7 dan ke Bekasi dengan bobot 8. Bandung terhubung ke Bekasi dengan bobot 5 dan ke Purwokerto dengan bobot 15. Bekasi terhubung ke Bandung dengan bobot 6 dan ke Cianjur dengan bobot 5. Tasikmalaya terhubung ke Bandung dengan bobot 5, ke Cianjur dengan bobot 2, dan ke Purwokerto dengan bobot 4. Cianjur terhubung ke Ciamis dengan bobot 23, ke Tasikmalaya dengan bobot 10, dan ke Yogyakarta dengan bobot 8. Purwokerto terhubung ke Cianjur dengan bobot 7 dan ke Yogyakarta dengan bobot 3. Yogyakarta terhubung ke Cianjur dengan bobot 9 dan ke Purwokerto dengan bobot 4. Program ini pakai array dua dimensi untuk menyimpan bobot dari koneksi antar kota dan array satu dimensi untuk menyimpan nama-nama kota. Fungsi tampilanGraph dipakai buat mencetak representasi graf dalam bentuk daftar adjacency yang menunjukkan kota-kota yang terhubung beserta bobot masing-masing koneksi.

### Guided 2
```C++
#include<iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node -> data << " ";
        preOrder(node -> left);
        preOrder(node -> right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder (node -> left);
        cout << node -> data << " ";
        inOrder(node -> right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven -> left = one;
    // 7
    // /\
    // 1 NULL

    seven -> right = nine;
    // 7
    // /\
    // 1 9

    one -> left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one -> right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine -> left = eight;
    // 7
    // /\
    // 1 9
    // / \ / \
    // 0 5 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```
### Output:
![output guided 2 graph and tree](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/ecff1a53-3452-4807-a169-92822ac87b93)
### Full screen shoot:
![Full ss guided 2 graph and tree](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/100f2fd3-2845-4e75-b48b-a8e8abe523f2)
### Interpretasi:
Kode C++ ini mengimplementasikan struktur data pohon biner dengan tiga jenis penelusuran: preOrder, inOrder, dan postOrder. Tiap simpul dalam pohon memiliki nilai data dan dua pointer yang menunjuk ke anak kiri dan kanan. PreOrder traversal mengunjungi simpul saat pertama kali ditemui, kemudian kunjungan dilanjutkan secara rekursif ke anak kiri dan kanan. InOrder traversal mengunjungi simpul saat kunjungiannya kedua kalinya, menghasilkan urutan nilai terurut dari yang terkecil ke yang terbesar. PostOrder traversal mengunjungi simpul setelah kunjungi semua anaknya, menghasilkan urutan nilai yang berbeda dari preOrder dan inOrder. Output dari penelusuran ini adalah: PreOrder: 7 1 0 5 9 8, InOrder: 0 1 5 7 8 9, dan PostOrder: 0 5 1 8 9 7.

## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya

```C++
#include <iostream>
using namespace std;

void tampilGraph(string *simpul, int **busur, int intan_2311110046)
{
    cout << endl;
    for (int i = 0; i < intan_2311110046; i++)
    {
        cout << "\t" << simpul[i];
    }
    cout << endl;
    for (int i = 0; i < intan_2311110046; i++)
    {
        cout << simpul[i] << "\t";
        for (int j = 0; j < intan_2311110046; j++)
        {
            cout << busur[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int intan_2311110046;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> intan_2311110046;
    cin.ignore();
    cout << "Silahkan masukkan nama simpul" << endl;

    string *simpul = new string[intan_2311110046];
    for (int i = 0; i < intan_2311110046; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        getline(cin, simpul[i]);
    }

    int **busur = new int *[intan_2311110046];
    for (int i = 0; i < intan_2311110046; i++)
    {
        busur[i] = new int[intan_2311110046];
    }

    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < intan_2311110046; i++)
    {
        for (int j = 0; j < intan_2311110046; j++)
        {
            cout << simpul[i] << "-->" << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }

    tampilGraph(simpul, busur, intan_2311110046);

    for (int i = 0; i < intan_2311110046; i++)
    {
        delete[] busur[i];
    }
    delete[] busur;
    delete[] simpul;

    return 0;
}
```
### Full Screen Shoot:
![full ss unguided 1 (4)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/548b4a34-a2aa-4bbd-b1d5-da42da4f01a2)
### Output:
![output unguided 1 (5)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/48dd0c09-1be8-4f3a-935a-873fd7538a22)
### Interpretasi:
Kode tersebut adalah sebuah program untuk membuat dan menampilkan graf berbobot menggunakan C++. Pertama, pengguna diminta untuk memasukkan jumlah simpul dan nama-nama simpulnya. Setelah itu, pengguna diminta untuk memasukkan bobot antar simpul-simpul yang ada. Setelah semua input selesai, program akan menampilkan graf berbobot dalam bentuk matriks, di mana simpul-simpul akan menjadi baris dan kolom, dan bobot antar simpul akan ditampilkan di dalam matriks sesuai dengan hubungan antar simpul-simpul tersebut. Sebagai contoh, output dari kode ini menunjukkan matriks berisi bobot antar simpul-simpul, misalnya, nilai 3 dari "BALI" ke "PALU", dan sebagainya.

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!


```C++
#include <iostream>
#include <queue>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

// Fungsi tambahan untuk menampilkan node child dan descendant
void displayChildAndDescendant(TNode *node) {
    if (node == NULL) return;

    queue<TNode*> q;
    q.push(node);

    cout << "Node " << node->data << " memiliki child dan descendant:\n";

    while (!q.empty()) {
        TNode *curr = q.front();
        q.pop();

        if (curr->left != NULL) {
            cout << "Child kiri dari " << curr->data << ": " << curr->left->data << "\n";
            q.push(curr->left);
        }
        if (curr->right != NULL) {
            cout << "Child kanan dari " << curr->data << ": " << curr->right->data << "\n";
            q.push(curr->right);
        }
    }
}

int main() {
    // Input data tree dari user
    int rootNodeData;
    cout << "Masukkan nilai data untuk root node: ";
    cin >> rootNodeData;

    TNode *root = new TNode(rootNodeData);

    queue<TNode*> q;
    q.push(root);

    while (!q.empty()) {
        TNode *curr = q.front();
        q.pop();

        int leftData, rightData;
        cout << "Masukkan nilai data untuk child kiri dari " << curr->data << " (jika tidak ada, masukkan -1): ";
        cin >> leftData;
        if (leftData != -1) {
            curr->left = new TNode(leftData);
            q.push(curr->left);
        }

        cout << "Masukkan nilai data untuk child kanan dari " << curr->data << " (jika tidak ada, masukkan -1): ";
        cin >> rightData;
        if (rightData != -1) {
            curr->right = new TNode(rightData);
            q.push(curr->right);
        }
    }

    // Tampilkan hasil dari penelusuran
    cout << "Hasil penelusuran PreOrder: ";
    preOrder(root);
    cout << endl;

    cout << "Hasil penelusuran InOrder: ";
    inOrder(root);
    cout << endl;

    cout << "Hasil penelusuran PostOrder: ";
    postOrder(root);
    cout << endl;

    // Tampilkan node child dan descendant
    displayChildAndDescendant(root);

    return 0;
}
```
### Output:
![output unguided 2 (4)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/27618a05-2467-47bd-88d3-3c8f49d5e2ef)
### Full Screenshoot:
![full ss unguided 2 (3)](https://github.com/diahintannuraini/Praktikum-Struktur-Data/assets/162097079/4fbfb2c4-2de7-45e0-9d51-960eeab7a911)
### Interpretasi:
Program ini adalah aplikasi yang memungkinkan pengguna untuk membangun dan mengeksplorasi pohon biner secara interaktif. Pengguna diminta untuk memasukkan nilai data untuk root node, kemudian memasukkan nilai data untuk child kiri dan kanan dari setiap node yang ada dalam pohon. Setiap node direpresentasikan oleh sebuah bilangan bulat, dan jika tidak ada child, pengguna diminta untuk memasukkan nilai -1. Setelah pengguna selesai memasukkan data, program akan menampilkan hasil dari tiga jenis penelusuran yang berbeda: PreOrder, InOrder, dan PostOrder. Selain itu, program juga menampilkan informasi tentang node child dan descendant dari setiap node dalam pohon. Ini memungkinkan pengguna untuk melihat hierarki hubungan antar node dan menjelajahi struktur pohon biner yang telah dibuat. Misalnya, hasil penelusuran menunjukkan urutan kunjungan node sesuai dengan jenis penelusuran yang dipilih, sementara informasi tentang node child dan descendant membantu pengguna memahami bagaimana setiap node terhubung satu sama lain dalam pohon biner.
## Kesimpulan:


## Referensi
[1] Karumanchi, N. (2011). Data Structures and Algorithms Made Easy: 700 Data Structure and Algorithmic Puzzles. CreateSpace. 

[2] Effendi Tono Hartono Andri Kurnaedi, D. (2013). Penerapan string matching menggunakan algoritma Boyer-Moore pada translator bahasa Pascal ke C. Majalah Ilmiah Unikom.

[3] Arianti, M. Y., Fitriani, N., Khairani, D., & Adinda, S. T. (2021). Rapor, Nilai, Dev C++ ANALISIS NILAI AKHIR RAPOR DENGAN PROGRAM C++ SMK ISLAMIYAH SEI KAMAH II 2021. PKM-P, 5(2), 164-167.

