#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

string cleanSentence(string sentence) {
    string cleanedSentence = "";
    for (char c : sentence) {
        if (isalpha(c)) {
            cleanedSentence += toupper(c);
        }
    }
    return cleanedSentence;
}

bool isPalindrome(string sentence) {
    stack<char> charStack;
    sentence = cleanSentence(sentence);

    for (char c : sentence) {
        charStack.push(c);
    }

    for (char c : sentence) {
        if (c != charStack.top()) {
            return false;
        }
        charStack.pop();
    }
    return true;
}

int main() {
    string sentence;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}