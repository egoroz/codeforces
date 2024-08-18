#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n;

    cin >> n;

    string s;
    cin >> s;

    int p = 0;
    int res = 0;
    int c = 1;
    for(int i = 1; i < n; ++i){
        if(c == 0 && s[i] == '_'){
            c = 1;
            p = i;
        } 
        else if(s[i] == '_' && c > 0){--c; res++;}
        else if(s[i] == '_' && c == 1){++c; }
        else if(s[i] == '(' && c > 0){++c; }
        else if(s[i] == ')' && c == 1){--c; res+= (i-p);}
        else if(s[i] == ')' && c > 0){--c; res++;}
    }

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