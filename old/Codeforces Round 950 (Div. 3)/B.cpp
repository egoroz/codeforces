#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, f, k;
    cin >> n >> f >> k;

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
//     while(is2 >> num){
//         b.push_back(num);
//     }
    int l = a[f-1];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

string res = "YES";
bool flag = false;

    if (k - 1 >= 0 && a[k-1] == l && k < n && a[k] == l ){res = "MAYBE"; flag = true;}
    if(!flag){
    for(int i = k; i < n; ++i){
        if (a[i] == l){res = "NO";}
    }
    }
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