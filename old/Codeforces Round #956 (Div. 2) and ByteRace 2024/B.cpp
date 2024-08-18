#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n, m;
    cin >> n >> m;

    // string str;
    // getline(cin, str);

    vector<vector<int>> a(n);
    vector<vector<int>> b(n);

    for(int i = 0; i < n; ++i){
        char A;
        for(int j = 0 ; j < m; ++j){
            cin >> A;
            a[i].push_back(A-'0');
        }

    }

    cout << "A = \n";
    for(auto el: a){
        for(auto e: el)
        cout << e << ' ';
        cout << "\n";
    }


    for(int i = 0; i < n; ++i){
        char B;
        for(int j = 0 ; j < m; ++j){
            cin >> B;
            b[i].push_back(B-'0');
        }

    }

    cout << "B = \n";
    for(auto el: b){
        for(auto e: el)
            {cout << e << ' ';}
        cout << "\n";
    }
    
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