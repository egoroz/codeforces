#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int res = 0;

    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    if(a1 >= b1 && a2 > b2 || a1 > b1 && a2 >= b2){res++;}
    if(a1 >= b2 && a2 > b1 || a1 > b2 && a2 >= b1){res++;}
    if(a2 >= b1 && a1 > b2 || a2 > b1 && a1 >= b2){res++;}
    if(a2 >= b2 && a1 > b1 || a2 > b2 && a1 >= b1){res++;}

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