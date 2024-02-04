#include <bits/stdc++.h>
using namespace std;

string solve(){
    int tc;
    cin >> tc;
    int ans = 0;
    int asum(0), bsum(0), csum(0);
    for(int i = 0; i < tc; i++){
        int a, b, c;
        cin >> a >> b >> c;
        asum += a;
        bsum += b;
        csum += c;
        // if(sum == 0) return "NO";
    }
    if(asum == 0 && bsum == 0 && csum == 0) return "YES"; 
    else return "NO";
}

int main() {
    cout << solve();
    
   
}