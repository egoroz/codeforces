#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void solve(){
    int s;
    int l = 2, r = 999;
    while(l < r){
        int d = (r - l)/3;
        int m1, m2;
        if(r - l <= 1){
            m1 = l;
            m2 = r;
            printf("? %d %d\n", m1, m2);
            fflush(stdout);
            scanf("%d", &s);
            if(s == -1){std::terminate();}
            if(s == (m1+1)*(m2+1)){l = l; break;}
            else if (s == m1*(m2+1)){l = r; break;}
            else{l = r; break;}
        }
        else if(r - l == 2){
            m1 = l;
            m2 = l+1;
            printf("? %d %d\n", m1, m2);
            fflush(stdout);
            scanf("%d", &s);
            if(s == -1){std::terminate();}
            if(s == (m1+1)*(m2+1)){l = l; break;}
            else if (s == m1*(m2+1)){l = l+1; break;}
            else{l = r; break;}
        }else{
            m1 = l + d;
            m2 = m1 + d;
        }
        printf("? %d %d\n", m1, m2);
        fflush(stdout);
        scanf("%d", &s);
        if(s == -1){std::terminate();}
        if(s == m1*m2){l = m2+1;}
        if(s == m1*(m2+1)){l = m1+1; r = m2;}
        if(s == (m1+1)*(m2+1)){r = m1;}
    }
    printf("! %d\n", l);
    fflush(stdout);
   
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}