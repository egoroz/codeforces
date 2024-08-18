#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
vector<vector<char>>ress;
    int t;
    cin >> t;
    // vector<int> ps;

    while(t--){
        // int p = 0;

        int n;
        cin >> n;

        string s;
        getline(cin, s);
        getline(cin, s);

        std::vector<char> ch(s.begin(), s.end());
        std::sort(ch.begin(), ch.end());
        ch.erase(std::unique(ch.begin(), ch.end()), ch.end());
        

        // cout << "\n" << "uc=";
        // for(auto el: ch){
        //     cout << el;
        // } 
        // cout << "\n";

        vector<char> res;

        int k;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < ch.size(); ++j){
                if (ch[j] == s[i]){k = ch.size()-1-j; break;}
            }
            res.push_back(ch[k]);
        }
    ress.push_back(res);

    }

    for(auto e: ress){
        for( auto el: e){
            cout << el;
        } 
        cout << "\n";
    }
}