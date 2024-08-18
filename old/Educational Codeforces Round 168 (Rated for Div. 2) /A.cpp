#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    string s;

    cin >> s;
    string res = "";
    bool flag = false;
int i = 0;
    for(; i < s.size()-1; ++i){
        res += s[i];
        if(s[i] == s[i+1]){flag = true; if(s[i] == 'a'){res += "b";}else{res += "a";}break;}
        
    }
    ++i;
    for(; i < s.size(); ++i){
            res += s[i];
    }

    if(!flag){if(s[0] == 'a'){res = "b" + s;}else{res = "a" + s;}}

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