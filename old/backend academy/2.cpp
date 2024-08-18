#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    // int n;

    // cin >> n;

    vector<string> tokens = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    vector<vector<int>> vvi(4, vector<int>(7, 0));
    // unordered_map<int, string> m;
    
    // vector<int> a;
    // vector<int> b;

    string str;   
    
    for(int i = 0; i < 4; ++i){
    // for(int k = 1; k <= 4; ++k){
        // cin >> str;
        std::getline(std::cin, str);
        if(str == ""){continue;}
        // cout<<str<<endl;
            for(int j = 0; j < 7; ++j){
                    // cout<<str.substr(i, 3)<<endl;
                for(int l = 0; l < str.size() - 2; ++l){
                    if(str.substr(l, 3) == tokens[j]){
                        vvi[i][j] = 1;
                        break;
                    }
                }
            }
        
    }

    // for(auto v: vvi){
    //     for(auto e: v){
    //         cout << e << " ";
    //     }
    //     cout << endl;
    // }

    int ft = 0;
    int lt = 0;
    int len = 0;
    int mft = 0;
    int mlt = 0;
    int mlen = 0;
    bool flag = true;
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 7; ++j){
            // cout << "LEN = " << len << endl;
            if(vvi[i][j] == 0){
                ++len;
                if(flag){ft = i*7 + j; flag = false;}
                if(mlen < len){
                    mft = ft;
                    mlt = i*7 + j;
                    mlen = len;
                }
            }else{
                flag = true;
                ft = i*7 + j;
                len = 0;
            }
        }
    }

    if(mlt > 0){
        cout << mft+1 << ' ' << mlt+1;
    }
    else{
        cout << mft << ' ' << mlt;
    }
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
    
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    // for(auto el: res){
    //     cout << el << "\n";
    // }
    
    return 0;
}