#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    
    string a;
    string b;


    cin >> a;
    // cout << "p=" <<p << '\n';
    cin >> b;
    int p = a.size();
        // cout << "b="<< b << '\n';

    int ms = 0;

    for(int i = 0; i < b.size(); ++i){
        int s = 0;
        int bi = i;
        int ai = 0;
        while(bi < b.size() && ai < a.size()){
            if(a[ai] == b[bi]){s++; ai++; bi++;}
            else{ai++;}
        }
        ms = max(ms, s);
    }

    // cout << "ms=" <<ms << '\n';

    p += b.size() - ms;


    res.push_back(p);

}


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    for(auto el: res){
        cout << el << "\n";
    }

    return 0;
}