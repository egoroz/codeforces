#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    string n;
    cin >> n;

    bool ok = true;

    if(n.size() < 3){ok = false;}
    if(n[0] != '1'){ok = false;}
    if(n[1] != '0'){ok = false;}
    if(n[2] == '0' || (n[2] =='1' && n.size() == 3)){ok = false;}


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