#include <bits/stdc++.h>
using ll = signed long long;
using namespace std;
vector<ll> res;
void solve(){
    int n;
    cin >> n;
    vector<ll> a;
    ll k;

    string str;
    
    
   
    std::getline(std::cin, str); // пустая строка
    std::getline(std::cin, str);
    std::istringstream is1(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }
    a.push_back(0);

    k = 0;
    if(n == 2){k = max(llabs(llabs(a[0]) + a[1]) , llabs(a[0] + a[1]));}
    else{
    for(int i = 1; i < n; ++i){
        if(a[i] + a[i+1] >= 0){
            if(i == 1){k = llabs(a[0]);}
            else{k = llabs(k + a[i-1]);}
        }
        else{
            if(i == 0){k = (a[0]);}
            else{k = k + a[i-1];}
        }
    }
    k = llabs(k + a[n-1]);}

    res.push_back(k);

}


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    for(int i = 0; i < res.size(); ++i){
        cout << res[i] << "\n";
    }
    return 0;
}