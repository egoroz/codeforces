#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> r;

void solve(){
    int n,m,k;

    cin >> n >> m >> k;

    int now = -1;
    
    string s;   
    std::getline(std::cin, s);
    std::getline(std::cin, s);

    string res = "YES";
  
    for(int i = m-1; i >= 0; --i){
        if(i == n){now = n; break;}
        if(i < n && s[i] == 'L'){now = i; break;}
    }
    if(now == -1){
        now = 0;
        for(int i = m-1; i >= 0; --i){
            if(i < n && s[i] == 'W'){now = i; break;}
        }
        if(s[now] == 'C'){res = "NO"; now = n;}
    }

    while(now < n){

        while(now < n && s[now] == 'L'){

            for(int i = m; i >= 1; --i){
                // cout<< "HERE2\n";
                if(i + now == n){now = n; break;}
                if(now + i < n && s[now + i] == 'L'){now = now + i;break;}
                if (i == 1){
                    for(int j = m; j >= 1; --j){
                        if(j + now == n){now = n; break;}
                        if(now + j < n && s[now + j] == 'W'){now = now + j;break;}
                        if(j == 1){
                            if(now + 1 < n && s[now+1] == 'W'){
                                if(k>0){k--;now++;}
                                else{res = "NO"; now = n; break;}
                            }else if(now + 1 < n && s[now+1] == 'C'){
                                res = "NO"; now = n; break;
                            }
                        }
                    }
                }
            }
            
        }

        // cout<< "HERE\n";
// 
        if(now < n && s[now] == 'W'){
            if(k > 0){k--; now++;}
            else{res = "NO"; now = n; break;}
        }else if(now < n && s[now] == 'C' ){res = "NO"; now = n; break;}


    }

    r.push_back(res);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    for(auto el: r){
        cout << el << "\n";
    }
    
    return 0;
}