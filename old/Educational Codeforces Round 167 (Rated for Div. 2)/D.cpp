#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> res;

struct sort_pred {
    bool operator()(const std::pair<int, int>& left, const std::pair<int, int>& right) {
        return left.first > right.first && (left.first - left.second >  right.first - right.second);
    }
};

void solve(){
    int n, m;
    ll p = 0;
    cin >> n >> m;

    vector<int> a;
    vector<int> b;
    vector<int> c;
    
    string str;   
    std::getline(std::cin, str);
    std::getline(std::cin, str);
    std::istringstream is1(str);

    std::getline(std::cin, str);
    std::istringstream is2(str);

    std::getline(std::cin, str);
    std::istringstream is3(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }

    while(is2 >> num){
        b.push_back(num);
    }
    while(is3 >> num){
        c.push_back(num);
    }

    vector<pair<int, int>> v;

    for(int i = 0; i < n; ++i){
        v.push_back({a[i], b[i]});
    }

    sort(v.begin(), v.end(), sort_pred());
    for(int i = 0; i < n; ++i){
    cout << "(" << v[i].first << ", "<<  v[i].second << ")"<< "\n";
    }

    // int d;
    // for(int i = 0; i < n; ++i){
    //     d = v[i].first-v[i].second;
    //     for(int j = 0; j < m; ++j){
    //         int k = (c[j] - v[i].first);

    //         if(k > 0 && k % d == 0){
    //             cout << "i1="<<i<<'\n';
    //             cout << "j1="<<j<<'\n';
    //             p += 2*(k / d);
    //             c[j] = 0;
    //         }
    //         else if(k > 0){
    //             cout << "i2="<<i<<'\n';
    //             cout << "j2="<<j<<'\n';
    //             p += 2*((k / d) + 1);
    //             c[j] = k%d;
    //         }

    //     }
    // }
    res.push_back(p);
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