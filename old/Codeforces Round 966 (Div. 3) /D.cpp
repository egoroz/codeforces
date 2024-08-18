#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    string s;
    cin >> s;

    vector<int> L;
    vector<int> R;

    for(int i = 0; i < n; ++i){
        if(s[i] == 'L'){L.push_back(i);}
        if(s[i] == 'R'){R.push_back(i);}
    }

    int ls = L.size(); 
    int rs = R.size();

    int l = 0;
    int r = rs-1;

    int sl=0, sr=0;
int c = 0;
    ll res = 0;
    if(ls == 0 || rs == 0){cout << res << '\n'; return;}
    while(l < ls && r >= 0 && L[l] < R[r]){
        // for(int i = L[l]; i <= R[r]; ++i){res += a[i];}
        ++c;
        sl = l; sr = r;
        ++l; --r;
    }
    l = 0;
    r = rs-1;
    ll q = 0;
    int ssl = l;
    int ssr = sr;
    int sc = c;
    for(int i = L[l]; i < L[sl]; ++i){
        if(ssl < ls && i == L[ssl] && c >0){ssl++;q++;--c;}
        //  cout << "i="<<i << " Q3="<< q<<'\n';
        res += q*a[i];
    }
    ++q;
    for(int i = L[sl]; i <= R[sr]; ++i){
        //  cout << "i="<<i << " Q3="<< q<<'\n';
        res += q*a[i];
    }
    --q;
    for(int i = R[sr]+1; i <= R[r]; ++i){
        // cout << "i="<<i << " Q3="<< q<<'\n';
        res += q*a[i];
        if(ssr+1 < rs && i == R[ssr+1]&& sc > 0){ssr++;q--;sc--;}
    }


    cout << res << "\n";

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