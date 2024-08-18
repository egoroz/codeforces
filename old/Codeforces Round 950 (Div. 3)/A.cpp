#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    int res = 0;
    cin >> n >> m;

    string str;
    cin >> str;
    
    vector<int> a(7, 0);

    for(int i = 0; i < n; ++i){

        ++a[str[i] - 'A'];
        
    }

    for(int i = 0; i < 7;++i){
        if(a[i] < m){ res += m - a[i];}
        // cout << a[i] << ' ';
    }

    // cout << str << '\n';
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