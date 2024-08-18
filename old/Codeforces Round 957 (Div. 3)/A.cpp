#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int a, b, c;

    cin >> a >> b >> c;

    for(int i = 0; i < 5; ++i){
        if(a <= b && a <= c){
            a++;
        } else if(b <= a && b <= c){b++;}
        else{c++;}
    }

    cout << a*b*c << "\n";
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