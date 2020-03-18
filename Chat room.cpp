#include <iostream>

using namespace std;

int main() {
    string Word, Hello = "hello";
    cin >> Word;
    int IndexCounter = 0;
    for (int i = 0; i < Word.length(); i ++) {
        if (Word[i] == Hello[IndexCounter] && IndexCounter < 5) {
            IndexCounter ++;
        }
    }
    if (IndexCounter == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
