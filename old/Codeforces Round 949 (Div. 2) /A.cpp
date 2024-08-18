#include <bits/stdc++.h>

using namespace std;

void solve(){
    int l, r;
    cin >> l >> r;
    int res = 0;
    int c = 1;
    while(c*2 <= r){
        c = c*2;
        res++;
    }
    cout << res << '\n';
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}