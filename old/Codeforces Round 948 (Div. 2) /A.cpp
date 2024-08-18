#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main(){
    vector<string> res;
    int t;
    cin >> t;

    while(t--){
        int n, m;
        vector<int> nums;
        cin >> n >> m;


        int h = 0;
        for(int i = 0; i < n; ++i){
            if(h < m){h+=2;}
            h--;
            
        }
        string ans = "NO";
        if(h == m){ans = "YES";}


        res.push_back(ans);
    }

    for(auto e: res){
        cout << e << '\n';
    }

    return 0;
}