#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    string res = "YES";

    for(int i = 0 ; i < n-1 ; ++i){
        if(str[i] > str[i+1] && isdigit(str[i]) && isdigit(str[i+1])){res = "NO"; break;}
        if(str[i] > str[i+1] && !isdigit(str[i]) && !isdigit(str[i+1])){res = "NO"; break;}
        if(!isdigit(str[i]) && isdigit(str[i+1])){res = "NO"; break;}
    }
    cout << res<< '\n';

}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}