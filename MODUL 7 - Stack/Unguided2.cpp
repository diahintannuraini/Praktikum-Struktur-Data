#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseSentence(string sentence) {
    stack<char> charStack;
    
    
    for (char c : sentence) {
        charStack.push(c);
    }

    cout << "Datastack Array :\nData : ";

    
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
}

int main() {
    string sentence;
    cout << "Masukkan Kata: ";
    getline(cin, sentence);

    reverseSentence(sentence);

    return 0;
}
