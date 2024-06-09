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
