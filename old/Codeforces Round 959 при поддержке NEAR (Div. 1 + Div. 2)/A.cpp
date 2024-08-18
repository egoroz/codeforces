#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n, m;

    cin >> n >> m;

    if(n == 1 && m == 1){
        string str;   
        std::getline(std::cin, str);
        std::getline(std::cin, str);
        cout << -1 << '\n';
    }
    else{
    vector<vector<int>> mat;

    for(int i = 0; i < n; ++i){
        vector<int> a;  
        string str;   
        std::getline(std::cin, str);
        std::getline(std::cin, str);
        std::istringstream is1(str);

        int num;
        while(is1 >> num){
            a.push_back(num);
        }
        mat.push_back(a);
    }

    for(int i = 0; i < n; ++i){
        int t = mat[i][0];
        for(int j = 0; j < m - 1; ++j){
            mat[i][j] = mat[i][j + 1];
        }
        mat[i][m-1] = t;

    }

    for(auto vec: mat){
        for(auto el : vec){
            cout << el << ' ';
        }
        cout << "\n";
    }
    }
    
    // vector<int> b;
    

    // std::getline(std::cin, str);
    // std::istringstream is2(str);


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