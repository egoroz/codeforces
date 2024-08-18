#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void solve(){
    int s;
    int l = 2, r = 999;
    while(l < r){
        int m = (l + r)/2;
        printf("? %d %d\n", m, m);
        fflush(stdout);
        scanf("%d", &s);
        if(s == -1){std::terminate();}
        if(s > m*m){r = m;}
        else{
            l = m+1;
        }
    }
    printf("! %d\n", l);
    fflush(stdout);
   
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}