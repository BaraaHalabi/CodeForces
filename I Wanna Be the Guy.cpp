#include <iostream>
using namespace std;

int main() {
    int Levels, Level;
    cin >> Levels;
    bool Game[Levels] = {false};
    int XLevels;
    cin >> XLevels;
    for (int i = 0; i < XLevels; i ++) {
        cin >> Level;
        Game[Level - 1] = true;
    }
    int YLevels;
    cin >> YLevels;
    for (int i = 0; i < YLevels; i ++) {
        cin >> Level;
        Game[Level - 1] = true;
    }
    bool Completed = true;
    for (int i = 0; i < Levels; i ++) {
        if (Game[i] == false) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
