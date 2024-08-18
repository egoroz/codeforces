#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

// vector<int> res;
ll f(ll a){
    ll res = 0;
    while(a > 0){
        res++;
        a /= 3;
    }
    return res;
}

void solve(){
    ll l, r;

    cin >> l >> r;



    ll q = f(l);
    ll res = 2*q;
    ll k = 1;
    for(ll i = 0; i < q; ++i){
        k*=3;
    }

    ll lastl = l+1;
    while(k <= r){
        res += (k-lastl)*q;
        q++;
        lastl = k;
        k*=3;
    }

    res += (r - lastl + 1)*q;

    cout << res << '\n';

    
    // vector<int> a;
    // vector<int> b;
    
    // string str;   
    // std::getline(std::cin, str);
    // std::getline(std::cin, str);
    // std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    // int num;
    // while(is1 >> num){
    //     a.push_back(num);
    // }

    // while(is2 >> num){
    //     b.push_back(num);
    // }

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