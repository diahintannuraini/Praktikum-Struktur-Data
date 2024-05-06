#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk membalikkan kalimat menggunakan stack
string reverseSentence(string sentence) {
    stack<string> wordStack;
    string word = "";
    string reversedSentence = "";

    // Memisahkan kalimat menjadi kata-kata
    for (char c : sentence) {
        if (c == ' ') {
            wordStack.push(word);
            word = "";
        } else {
            word += c;
        }
    }
    wordStack.push(word); // Push kata terakhir ke dalam stack

    // Membalikkan urutan kata dengan mengeluarkan kata dari stack
    while (!wordStack.empty()) {
        reversedSentence += wordStack.top() + " ";
        wordStack.pop();
    }

    return reversedSentence;
}

int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    string reversedSentence = reverseSentence(sentence);
    cout << "Kalimat setelah dibalik: " << reversedSentence << endl;

    return 0;
}
