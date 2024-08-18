#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> res;

void solve(){
    int n;
    ll rr = 0;
    ll r = 0;
    cin >> n;

    vector<int> a;
    vector<int> b(n+1, 0);
    
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
    
    b[n-1] = a[n-1];
    for(int i = n-2; i >= 0; --i){
        if(a[i] > a[i+1]){
            b[i] = a[i] - a[i+1] + 1;
        }
        else{
            b[i] = a[i] - a[i+1] - 1;
        }
    }

    // cout << "B = ";
    // for(auto el : b){
    //     cout << el << " ";
    // }
    // cout << "\n";

    int i = n-1;
    
        int l = 0;
        while(i >= 0 && b[i]>0){
            l = b[i];
            i--;
        }
        r += l;

        // while(b[i] < 0){
        //     r += abs(b[i]);
        //     --i;
        // }

        rr = max(r, rr);

    while(i >= 0){
        // r = rr;
        while(i >= 0 && a[i] - rr >= 0){
            rr += a[i] - rr;
            // rr = max<int>(r, b[i]);
            // cout << "\nHH\n";
            i--;
        }

        while(i >= 0 && a[i] - rr < 0){
            // cout << "\nHH2\n";
            rr += 1;
            i--;
        }
    }


    res.push_back(rr);

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