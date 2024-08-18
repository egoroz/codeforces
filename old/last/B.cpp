#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n;
    ll res = 0;

    cin >> n;
    vector<ll> nums(n);

    for(int i = 0 ; i < n; ++i){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int c = 0;
    int d = 0;

    for(int i = 0;i<n;++i){
        if(nums[i] % 2 == 0){c++;}
        else{d++;}
    }

    ll mo = 0;
    ll mc = 0;
    ll mm = nums[n-1];

    int k = -1;

    bool flag = false;
    for(int i = n-1; i>=0; --i){
        if(nums[i] % 2 == 1 && mo == 0){mo = nums[i];k = i; mc = mo;}
        if(nums[i] % 2 == 0 && mo != 0 && !flag){mc += nums[i]; flag = true; continue;}//
        if(nums[i] % 2 == 0 && flag){mc += nums[i];}
    }


    if(k > 0 && flag){
        for(int i = k + 1; i < n; ++i){
            if(nums[i] % 2 == 0 && mc > nums[i]){mc += nums[i]; continue;}
            if(nums[i] % 2 == 0 && mc < nums[i]){res++; break;}
        }
    }

    if(!flag){
        if(mm % 2 == 0){res++;}
    }

    for(int i = 0; i < n; ++i){if(nums[i] %2 == 0){res++;}}

    if(c == n || d == n){cout << 0 << '\n';}
    else{
        cout << res << '\n';
    }

    
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