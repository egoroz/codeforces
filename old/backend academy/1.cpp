#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n;

    cin >> n;

    vector<int> a;
    // vector<int> b;
    
    string str;   
    std::getline(std::cin, str);
    std::getline(std::cin, str);
    std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }

    ll res = 0;
    for(auto el : a){
        res += el%2;
    }

    if(res % 2 == 0){cout << "YES";}
    else{cout << "NO";}

    // while(is2 >> num){
    //     b.push_back(num);
    // }

    // res.push_back(r);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    // for(auto el: res){
    //     cout << el << "\n";
    // }
    
    return 0;
}