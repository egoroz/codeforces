#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string s;
    getline(cin, s);
    getline(cin, s);

    // istringstream is{s};

    vector<int> v(26);

    // char c;
    // while(is >> c){
    //     v.push_back(c);
    // }

    int need = k-1;
    char last = s[0];
    if(need == 0){++v[last-'a'];need = k;}
    for(int i = 1; i < n; ++i){
        last = s[i-1];
        if (last == s[i]){--need;}
        else{need = k-1;}
        if(need == 0){++v[s[i]-'a'];need = k;}
    }

    cout << *max_element(v.begin(), v.end());
}