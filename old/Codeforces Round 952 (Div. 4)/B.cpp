#include <bits/stdc++.h>

using namespace std;

vector<int> res;

void solve(){
    int n;
    int r;
    cin >> n;

    int x = 2;
    int k = 1;
    int sum = 0;
    int sum_max = 0;
    while(x <= n){
    while(k * x <= n){
        sum += k * x;
        k++;
    }
    if(sum > sum_max){r = x; x++;sum_max = sum;}
    else{x++;}
    k = 1;
    sum = 0;
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