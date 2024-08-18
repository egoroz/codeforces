#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n;

    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    int res = 0;

    // if(a[0] == 'x' && a[1] == '.' && a[2] == 'x' && b[0] == '.'){res++;}
    // if(b[0] == 'x' && b[1] == '.' && b[2] == 'x' && a[0] == '.'){res++;}

    // if(a[n-3] == 'x' && a[n-2] == '.' && a[n-1] == 'x' && b[n-1] == '.'){res++;}
    // if(b[n-3] == 'x' && b[n-2] == '.' && b[n-1] == 'x' && a[n-1] == '.'){res++;}

    for(int i = 0; i < n-2; ++i){
        if(a[i] == 'x' && a[i+1] == '.' && a[i+2] == 'x' && b[i+1] == '.'  && b[i] == '.'  && b[i+2] == '.'){res++;}
        if(b[i] == 'x' && b[i+1] == '.' && b[i+2] == 'x'  && a[i+1] == '.'  && a[i] == '.'  && a[i+2] == '.'){res++;}
    }

    cout << res <<'\n';

    
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