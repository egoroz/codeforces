#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n;

    cin >> n;

    
    int x = 0;
    vector<int> a;
    vector<int> b;
    string ssn = to_string(n);
    string sn = "";

    for(int i = 1; i < 10000; ++i){ //a
        for(int j = 1; j <= i; ++j){
            sn += ssn;
            string sn1 = sn;
            int s = sn1.length() - j;
            if(s>0){
                sn1.erase(s);
            }
            else{continue;}
            if(sn1 == to_string(n*i - j)){a.push_back(i); b.push_back(j); x++;}
        }
    }

    cout << x << "\n";
    for(int i = 0; i < x; ++i){
        cout << a[i] << ' ' << b[i] << '\n';
    }
    // res.push_back(r);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    // for(auto el: res){
    //     cout << el << "\n";
    // }
    
    return 0;
}