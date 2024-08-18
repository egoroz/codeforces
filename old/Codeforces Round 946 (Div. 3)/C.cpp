#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;
    vector<int> ps;

    while(t--){
        int p = 0;

        int n;
        cin >> n;

        string s;
        getline(cin, s);
        getline(cin, s);
        istringstream is{s};

        int num;
        vector<int> v;
        while(is >> num){
            v.push_back(num);
        }

        for(int i = 0; i < n-2; ++i){
            for(int j = i + 1; j < n - 2; ++j){
                if (v[i] == v[j] && v[i + 1] == v[j + 1] && v[i + 2] != v[j + 2]) {
                    p++;
                } else if (v[i] != v[j] && v[i + 1] == v[j + 1] && v[i + 2] == v[j + 2]) {
                    p++;
                } else if (v[i] == v[j] && v[i + 1] != v[j + 1] && v[i + 2] == v[j + 2]) {
                    p++;
            }
            }
        }
        ps.push_back(p);
        
    }

    for(auto e: ps){
        cout << e <<"\n";
    }
}