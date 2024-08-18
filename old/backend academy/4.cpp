#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vector<int> res;

void solve(){
    int n, m;

    cin >> n >> m;

    
    vector<int> a(1);
    vector<int> b(1);
    vector<int> l(1);
    
    for(int i = 0; i < m; ++i){
        int beg, end;
        cin >> beg >> end;
        a.push_back(beg);
        b.push_back(end);
        l.push_back(end-beg);
    }

    int beg = 1, end = 1;
    int len = 1;
    int maxbeg = 1, maxend = 1;
    int maxlen = 1;

    bool flag = true;
    for(int i = 1; i < m; ++i){  //
        if((b[i] < a[i+1] || b[i+1] < a[i])) {
            len = 1;
            beg = i+1;
            flag = false;
        } else {
            // cout << "LEN = " << len << endl;
            flag = true;
        }

        if(flag){
            len++;
            end = i;
            if(len > maxlen){
                maxlen = len;
                maxend = i+1;
                maxbeg = beg;
            }
        } else{
            beg = i+1;
        }
    }


    // cout << maxbeg << ' ' << maxend << '\n';

    int res = 0;

    for(int i = beg - 1; i >= 1; --i){
        if(!(b[i] < a[i+1] || b[i+1] < a[i])){continue;}
        else if(abs(b[i] - a[i+1]) <= abs(b[i+1] - a[i])) {
            res+=abs(b[i] - a[i+1]);
            b[i] = a[i+1];
            a[i] = b[i] - l[i];
        }else if(abs(b[i] - a[i+1]) > abs(b[i+1] - a[i])) {
            res+=abs(b[i+1] - a[i]);
            a[i] = b[i+1];
            b[i] = a[i] + l[i];
        }
    }

    for(int i = end + 1; i <= m; ++i){
        if(!(b[i] < a[i-1] || b[i-1] < a[i])){continue;}
        else if(abs(b[i] - a[i-1]) <= abs(b[i-1] - a[i])) {
            res+=abs(b[i] - a[i-1]);
            b[i] = a[i-1];
            a[i] = b[i] - l[i];
        }else if(abs(b[i] - a[i-1]) > abs(b[i-1] - a[i])) {
            res+=abs(b[i-1] - a[i]);
            a[i] = b[i-1];
            b[i] = a[i] + l[i];
        }
    }

    cout << res;
    // string str;   
    // std::getline(std::cin, str);
    // std::getline(std::cin, str);
    // std::istringstream is1(str);

    // std::getline(std::cin, str);
    // std::istringstream is2(str);

    // int num;
    // while(is1 >> num){
    //     a.push_back(num);
    // }

    // while(is2 >> num){
    //     b.push_back(num);
    // }

    // res.push_back(r);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    // for(auto el: res){
    //     cout << el << "\n";
    // }
    
    return 0;
}