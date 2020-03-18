#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int FindIndex(int Numbers[], int Size,  int Number) {
    for (int i = 0; i < Size; i ++) {
        if (Numbers[i] == Number)
            return i;
    }
}

void Print(int Numbers[], int Size) {
    for (int i = 0; i < Size; i ++)
        cout << Numbers[i] << " ";
    cout << endl;
}

int main() {
    int Number;
    cin >> Number;
    int Unsorted[Number];
    vector <int> Sorted(Number);
    for (int i = 0; i < Number; i ++) {
        cin >> Sorted[i];
        Unsorted[i] = Sorted[i];
    }
    sort(Sorted.begin(), Sorted.end());
    int Difference = 0;
    for (int i = 0; i < Number; i ++) {
        if (Sorted[i] != Unsorted[i]) {
            cout << i << " " << FindIndex(Unsorted, Number, Sorted[i]) << endl;
            int Temp1 = Unsorted[i], Temp2 = Unsorted[FindIndex(Unsorted, Number, Sorted[i])];
            Unsorted[i] = Temp2;
            Unsorted[FindIndex(Unsorted, Number, Sorted[i])] = Temp1;
            //cout << "Values = " << Temp2 << " " << Temp1 << endl;
            Print(Unsorted, Number);
        }
    }
    //cout << Difference / 2;
}

/*
5 2 5 1 4 Unsorted
1 2 4 5 5 Sorted
*/