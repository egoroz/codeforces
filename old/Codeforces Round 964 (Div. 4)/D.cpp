#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    string s, t, res = "";

    cin >> s;
    cin >> t;
    int n = s.size();

    int j = 0;
    for(int i = 0; i < n; ++i){
        if(j < t.size() && s[i] == t[j]){res += s[i];j++;}
        else if(s[i] == '?' && j < t.size()){res += t[j]; j++;}
        else if(s[i] != '?'){res += s[i];}
        else{res+='a';}
    }

    if(j < t.size()){cout << "NO\n";}
    else{
        cout << "YES\n";
        cout << res << '\n';
    }
    
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