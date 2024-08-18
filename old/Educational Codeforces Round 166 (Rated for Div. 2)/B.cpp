#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

void solve(){
    int n;
    vector<int> a;
    vector<int> b;
    string str;
    cin >> n;
    
   
    std::getline(std::cin, str); // пустая строка
    std::getline(std::cin, str);
    std::istringstream is1(str);

    std::getline(std::cin, str);
    std::istringstream is2(str);

    ull num;
    while(is1 >> num){
        a.push_back(num);
    }
    while(is2 >> num){
        b.push_back(num);
    }

    ull res = 1;
    bool flag = false;

    for(int i = 0; i < n; ++i){
        if(b[i] >= b[n] && b[n] >= a[i]){flag = true; break;}
        if(b[i] <= b[n] && b[n] <= a[i]){flag = true; break;}
    }

    if(!flag){
        ull k = 1000000001;

        for(int i = 0; i < n; ++i){
            k = min<int>(k, min(abs(a[i] - b[n]), abs(b[i] - b[n])));
        }

        res += k;
    }
    
    if (b.size() == n){res--;}

    for(int i = 0; i < n; ++i){
        res += abs(a[i] - b[i]);
    }

    cout << res << '\n';

}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}