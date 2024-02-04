#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "";
    cin >> str;
    int n = str.size();
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i += 2;
            if(flag == 1) cout << " ";
            flag = 0;
        }

        else{
            flag = 1;
            cout << str[i];
    }
        } 

}