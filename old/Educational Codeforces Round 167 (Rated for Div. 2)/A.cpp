#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> res;

void solve(){
    int n;
    string r = "NO";

    cin >> n;

    for (int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        if(y >= -1){r = "YES";}
        res.push_back(r);
        r = "NO";

    }

    // sort(a.begin(), a.end());



}


int main(){
    
    int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
    
    for(auto el: res){
        cout << el << "\n";
    }

    return 0;
}