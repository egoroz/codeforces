#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int s = 2;

vector<ll> find(ll n){
    vector<ll> a(s,1) ;
    while(n >= 1){
        bool flag = true;
        for(ll i = 2; i*i <= n; ++i){
            if(n % i == 0){flag = false; break;}
        }

        for(int i = 0; i < s; ++i){
            if(flag && a[i] == 1){a[i] = n; break;}

        }
        if(a[s-1] != 1)break;
        // else if(flag && a[1] == 1){a[1] = n;}
        // else if(flag ){a[2] = n; break;}
        --n;
    }
    return a;
} 

ll qfind(ll n, ll v){
    ll q = 1;
    ll k = n;
    --v;
    while(v >= 1){
        bool flag = true;
        for(ll i = 2; i*i <= v; ++i){
            if(v % i == 0){flag = false; break;}
        }
        if(flag && gcd(k, v) <= 1){q = v; break;}
        --v;
    }
    return q;
} 

void solve(){
    ll n, m, l, f;
    cin >> n >> m >> l >> f;

    vector<ll> p(s);

    p = find(n);
    // if(n == 4){
    //     p[0] = 3;
    //     p[1] = 1;
    // }

    ll ma = 0;

    for(ll i = p[0]; i <= n; ++i){

        for(int k = 1; k < s; ++k){
            for(ll j = p[k]; j <= i; ++j){
                if(gcd(i, j) <= 1){ma = max(ma, i*max(l, f)+j*min(l,f));}
                else{break;}
            }
        }

        if(i == n){
            ll q = qfind(n, p[0]);

             for(ll j = q; j <= i; ++j){
                if(gcd(i, j) <= 1){ma = max(ma, i*max(l, f)+j*min(l,f));}
                else{break;}
            }

        }
    }
    
    cout << ma << '\n';
    

    // cout << "Q" << qfind(4,3)  << "\n";

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