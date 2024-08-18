#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct p{
    ll x = 0;
    ll y = 0;
    p() = default;
    p(ll x, ll y): x(x), y(y){}
};


ll dist(p a, p b){
    return pow((a.x-b.x),2) + pow((a.y-b.y),2);
}

void solve(){
    int n=1;
    cin >> n;

    vector<p> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].x >> a[i].y;
    }

    ll xs, ys;
    ll xt, yt;
    cin >> xs >> ys;
    cin >> xt >> yt;

    p ps(xs, ys);
    p pt(xt, yt);

    ll mdist = 4*1e18;
    for(int i = 0; i < n; ++i){
        ll d = dist(a[i], pt);
        if(d < mdist){mdist = d;
        }
        // cout << mdist << " == d\n";
    }

    if(mdist > dist(ps, pt)){
        cout << "YES\n";
    }
    else{cout << "NO\n";}
    // cout << dist(ps, pt) << "\n";

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