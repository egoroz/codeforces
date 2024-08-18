#include <bits/stdc++.h>

using namespace std;

void solve(){
   int n, m;
   int s = 0, e = 0;
   int ss = 0, ee = 0;
   int x = 0, y = 0;
    std::cin >> n >> m;
    std::vector<std::string> lines(n+2);
    for(int i = 0; i < n; i++) {
        std::cin >> lines[i];
    }

    for(int i = 0; i < 100000; ++i){
    lines[n] += "   ";
    lines[n+1]+= "   ";
    }

    bool flag = false;
    int i = 0;
    while(i < n){
        if (flag){break;}
        int j = 0;

        while(j < m){
            if(lines[i][j] == '#')
                {s = i;
                while(lines[i][j] == '#'){
                    i++;
                }
                --i;
                e = i;
                y = j;
                x = s + (e - s)/2;
                flag = true;
                break;
                }
                ++j;
        }
        ++i;
    }
    cout << x + 1 << " " << y + 1 << '\n';

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