#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    bool ok = true;
    int l=a[1],r=a[1];
    for(int i = 1; i <= n; ++i){
        if(a[i] != l && a[i] != r){ok = false;break;}
        if(a[i] == l)
            {l = a[i] - 1;}
        if(a[i] == r){
            r = a[i] + 1;
        }
    }
  if(ok){cout << "YES" << '\n';}
    else{
    cout << "NO"<< "\n";
    }

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