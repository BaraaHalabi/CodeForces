#include <iostream>
using namespace std;
 
int main() {
    int Days, Need, Cost, Price = 100, Money = 0;
    cin >> Days;
    for (int i = 0; i < Days; i ++) {
        cin >> Need >> Cost;
        Price = min(Price, Cost);
        Money += Price * Need;
    }
    cout << Money;
}