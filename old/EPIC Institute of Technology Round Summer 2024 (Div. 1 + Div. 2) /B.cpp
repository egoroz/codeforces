#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> res;

void solve(){
    int n;
    ll r = 0;
    cin >> n;

    vector<int> a;
    vector<int> b(n, 0);
    
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

    // while(is2 >> num){
    //     b.push_back(num);
    // }

    int m = 0;
    int c = 0;
    int nc = 0;

    for(int i = 0; i < n; ++i){

        if(a[i] > m){m = a[i];}
        if(a[i] < m){b[i] = m - a[i]; c++;}
    }

    sort(b.begin(), b.end());

    // cout << "B = ";
    // for(auto el : b){
    //     cout << el << " ";
    // }
    // cout << "\n";
    ll sk = 0;

    int i = 0;
    while(i < n){
        int si = i;
        if(b[i] > 0 && b[i] > sk){
            ll k = b[i] - sk;
            sk += k;

            r += k*(c+1);
            
            int j = i;
            while(j < n){
                if(b[j] <= sk){c--;}
                else{break;}

                ++j;
            } 
            }
        
        // else{i++;}
        i = si + 1;
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