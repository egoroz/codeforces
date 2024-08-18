#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for(int i = 0;i<n;++i){
        cin >> a[i];
    }


    for(int i = 0;i<n;++i){
        cin >> b[i];
    }

    int k = 0;
    int i1 = 0, i2 = n-1;
    int j1 = 0, j2 = n-1;
    string str = "Bob";
    while(k < n-1){
        if(!((a[i1] == b[j1] || a[i1] == b[j2]) &&  (a[i2] == b[j2] || a[i2] == b[j1]))){str = "Alice";}
        // else if( !(a[i1] == b[j2] && a[i2] == b[j1])){str = "Alice";}
        else{
            if(b[j1] == a[i1]){j1++;}
            else{j2--;}
            i1++;
            }
        ++k;
    }
    cout << str << "\n";

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}