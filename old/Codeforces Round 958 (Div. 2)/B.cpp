#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n;

    cin >> n;

    
    // vector<int> a;
    // vector<int> b;
    
    string s;   
    std::getline(std::cin, s);
    std::getline(std::cin, s);
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

    int c1 = 0;
    int c0 = 0;
    string ns = "";
    char last = ' ';
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '0' && (last == '1' || last == ' ')){
            ns += s[i];
        }
        if(s[i] == '1'){
            ns += s[i];
        }
        last = s[i];
    }

    for(int i = 0; i < ns.size(); ++i){
        if(ns[i] == '0') c0++;
        if(ns[i] == '1'){
            c1++;}
    }

    if(c1 > c0){cout << "YES\n";}
    else{cout << "NO\n";}


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