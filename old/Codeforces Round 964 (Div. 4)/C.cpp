#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n, s, m;

    cin >> n >> s >> m;

    int lastl = 0;
    int lastr = 0;
    bool flag = false;

    for(int i = 0; i < n; ++i){
        int l, r;
        cin >> l >> r;

        if(l - lastr >= s){
            flag = true;
        }

        lastl = l;
        lastr = r;
    }
    if(m - lastr >= s){flag = true;}

    if(flag){cout << "YES\n";}
    else{cout << "NO\n";}
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