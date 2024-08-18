#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n, k;

    cin >> n >> k;

    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int kmin = nums[n-1];
    int kmax = nums[n-1] + k - 1;

    unordered_set<int> s;

    bool FLAG = false;

    for(int i = 0; i < 1; ++i){
        // bool flag = false;
        for(int j = 0; j < k; ++j){
            // if(s.find(nums[i] + ((kmin-nums[i])/k + 1)*k + j)!=s.end()){
            //     flag = true;
                s.insert(nums[i] + ((kmin-nums[i])/k + 1)*k + j);
            // }
        }
        // if(!flag){FLAG = true; break;}
    }

    for(int i = 1; i < n; ++i){
        bool flag = false;
        for(int j = 0; j < k; ++j){
            if(s.find(nums[i] + ((kmin-nums[i])/k + 1)*k + j)!=s.end()){
                flag = true;
                // s.insert(nums[i] + ((kmin-nums[i])/k + 1)*k + j);
            }
        }
        if(!flag){FLAG = true; break;}
    }

    int m = *min_element(s.begin(), s.end());

    if(FLAG){cout << -1 << '\n';}
    else{
        cout << m << '\n';
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