#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int res = 0;
    
    int l = n - m;
    int r = n + m;

    vector<int> a(31);
    vector<int> b(31);

    int x = n;
    int i = 0;
    while(x > 0){
        a[i] = x % 2;
        i++;
        x = x / 2;
    }

    // reverse(a.begin(), a.end());

    // int y = 0;
    // for(int j = 30; j >= 0; --j){
    //     if (a[j] == 1){y = pow(2,j); break;}
    // }


    for(int j = 0; j < 31; ++j){
        int y = 0;
        int z = 0;
        int k = 30;
        for(; k > j; --k){
            if (a[k] == 1){y += pow(2,k); z += pow(2,k);}
        }
        k--;

        for(k; k >= 0; --k){
            z += pow(2,k);
        }

        if(a[j] == 0){
            if(n - m > 0 && (y + pow(2,j) <= n + m || z - pow(2,j) >= n - m)){b[j] = 1;}
            if(n - m <= 0 && (y + pow(2,j) <= n + m || z - pow(2,j) >= 0)){b[j] = 1;}
        }
    }
   
    for(int j = 0; j < 31; ++j){
        if(a[j] > 0){res += pow(2,j) * a[j];}
        else if(b[j] > 0){res += pow(2,j) * b[j];}
        
    }
    cout << res << '\n';
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}