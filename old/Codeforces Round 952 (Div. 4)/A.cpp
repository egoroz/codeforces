#include <bits/stdc++.h>

using namespace std;

vector<int> res;

void solve(){
    int n;
    int r;
    // cin >> n;

    // vector<int> a;
    // vector<int> b;
    
    string str1;   
    cin >> str1;
    string str2;   
    cin >> str2;
    // std::getline(std::cin, str); // пустая строка
    // std::getline(std::cin, str);
    // std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    // int num;
    // while(is1 >> num){
    //     a.push_back(num);
    // }

    string a = str2[0] + str1.substr(1,2);
    string b = str1[0] + str2.substr(1,2);

    // res.push_back(r);
    cout << a <<  ' ' << b << "\n";

}


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    // for(auto el: res){
    //     cout << el << "\n";
    // }

    return 0;
}