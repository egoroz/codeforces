#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a;
    // vector<int> b;
    string str;
    
   
    std::getline(std::cin, str); // пустая строка
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
    bool flag = true;
    bool flag1 = true;

    int i = 0;
    while(i < n-1){
        int k = gcd(a[i], a[i+1]);
        if(m <= k){m = k;}
        else if(flag){flag = false; {k = gcd(a[i-1], a[i+1]); if(m <= k){m = k;} else{if(i+2<n){k = gcd(a[i], a[i+2]); if(m <= k){m = k;} else{cout << "NO\n";flag1 = false;break;}}else{cout << "NO\n";flag1 = false;break;}}}}
        else{cout << "NO\n";flag1 = false;break;}
        ++i;
    }

    if(flag1){
        cout << "YES\n";
    }
    }


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}