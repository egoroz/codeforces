#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n,m,k;

    cin >> n >> m >> k;

    
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

    int A = 1;

    for(int i = n; i >=1; --i){
        if(i >= k){
            cout << i << ' ';
        }else if(i <= m){A = m; break;}
        else{cout << i << ' ';}
    }

    for(int i = 1; i <= A; ++i){
        cout << i << ' ';
    }
    cout << "\n";
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