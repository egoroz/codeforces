#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    string str;
    
   
    std::getline(std::cin, str); // пустая строка
    std::getline(std::cin, str);
    std::istringstream is1(str);

    std::getline(std::cin, str);
    std::istringstream is2(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }
    while(is2 >> num){
        b.push_back(num);
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