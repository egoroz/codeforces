#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n;
    int r = 0;

    cin >> n;

    for(int i = 1; i <= n; ++i){
        std::cout << i << " ";
    }
    std::cout << "\n";

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