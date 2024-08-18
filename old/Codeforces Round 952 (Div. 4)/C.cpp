#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> res;

void solve(){
    int n;
    int r = 0;
    cin >> n;

    vector<ll> a;
    // vector<int> b;
    
    string str;   
    std::getline(std::cin, str); // пустая строка
    std::getline(std::cin, str);
    std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }

    // sort(a.begin(), a.end());

   ll s = 0;

    ll m = a[0];
    for(int i = 0; i < n; ++i){
        if (a[i] > m){m = a[i];}
        s += a[i];
        if(s == 2*m){r++;}

    }

    res.push_back(r);

}


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    for(auto el: res){
        cout << el << "\n";
    }

    return 0;
}