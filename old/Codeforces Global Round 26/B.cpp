#include <bits/stdc++.h>

using namespace std;

void solve(){
    unsigned long long num;
    cin >> num;
    string res = "YES";

    if(num%10 == 9){res = "NO";}
    
    unsigned long long x = num;

    unsigned long long y = num;

    unsigned long long s = num;
    while(num>0){
        x = num;
        y = num % 10;
        if(s != num && y == 0){res = "NO"; break;}
        num /= 10;
    }

    if(x > 1){res = "NO";}


    cout << res << "\n";

}


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}