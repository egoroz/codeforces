#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n, k;

    cin >> n >> k;

    
    vector<int> a;
    // vector<int> b;
    
    string str;   
    std::getline(std::cin, str);
    std::getline(std::cin, str);
    std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }

// cout << "\n";
//     for(auto el: a){
//         cout << el << " ";
//     }

// cout << "\n";
    int m = 0;
    for(int i = 0; i < k; ++i){
        if(a[i] >= m){m = a[i];}
    }

    bool flag = true;

    int r = 0;
    for(int i = 0; i < k; ++i){
        if((a[i] == m) && flag){flag = false;}
        else{r += (2 * a[i]) - 1;}
    }

    // cout << r << "\n";
    // while(is2 >> num){
    //     b.push_back(num);
    // }

    res.push_back(r);

}


int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    
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