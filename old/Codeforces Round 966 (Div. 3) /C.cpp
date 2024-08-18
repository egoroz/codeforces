#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> m;

    vector<string> s(m);


    for(int i = 0; i < m; ++i){
        cin >> s[i];
    }
    vector<bool> res(m, true);
    for(int i = 0; i < m; ++i){
        vector<int> b(26, (int)1e9+1);
        vector<bool> bb(26, false);
        for(int j = 0; j < n; ++j){
            if(n != s[i].size()){res[i] = false; break;}
            if(b[s[i][j]-'a'] == (int)1e9+1 && bb[s[i][j]-'a'] == false){b[s[i][j]-'a'] = a[j];bb[s[i][j]-'a'] = true;}
            if(b[s[i][j]-'a'] == (int)1e9+1 && bb[s[i][j]-'a'] == true){res[i] = false; break;}
            if(b[s[i][j]-'a'] != a[j]){res[i] = false; break;}
        }
        if(res[i]){
            sort(b.begin(), b.end());
            for(int k = 0; k < 25; ++k){if(b[k] == b[k+1] && b[k] != (int)1e9+1){res[i] = false; break;}}
        }
    }

    for(auto e: res){
        if(e){cout << "YES\n";}
        else{cout << "NO\n";}
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