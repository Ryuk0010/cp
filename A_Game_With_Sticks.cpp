#include <bits/stdc++.h>
using namespace std;

int main() {
    bool Malvika = 0;
    bool Akshat = 1;
    int stick1, stick2;
    cin >> stick1 >> stick2;
    int k = min(stick1, stick2);
    if(k % 2 == 0){
            cout << "Malvika";
        }
    else cout << "Akshat";
}