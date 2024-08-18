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

    string res = "";
    bool flag = true;
    int i = 0;
    while(i < n - 1){
        res+="B";
        if(a[i] == a[i+1]){res += "R"; i++; break;}
        if(a[i] != a[i+1]){flag = false; res += "R"; i++; break;}
        ++i;
    }

    while(i<n-1){
        res+="B";
        if(a[i] != a[i+1] && flag){flag = false;}
        ++i;
    }


    if(flag){res = "NO";}
    else{cout << "YES\n";}

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