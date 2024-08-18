#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n;

    cin >> n;
    string s;

    cin >> s;

    int cA = 0, cB = 0, cC = 0, cD = 0, c = 0;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'A' && cA < n){cA++;}
        if(s[i] == 'B' && cB < n){cB++;}
        if(s[i] == 'C' && cC < n){cC++;}
        if(s[i] == 'D' && cD < n){cD++;}
    }

    cout << cA + cB+ cC + cD << "\n";

    
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