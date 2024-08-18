#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> res;

void solve(){
    int n;
    int sa = 0;
    int sb = 0;
    cin >> n;

    vector<int> a;
    vector<int> b;
    
    string str;   
    std::getline(std::cin, str);
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
    int A=0,B=0,C=0,D=0,E=0,F=0,G=0,J=0,K=0;

    for(int i = 0; i < n;++i){
        if(a[i] == -1 && b[i] == -1){A++;}
        if(a[i] == 1 && b[i] == 1){B++;}
        if(a[i] == 1 && b[i] == 0){D++;}
        if(a[i] == 0 && b[i] == 1){F++;}
        if(a[i] == -1 && b[i] == 0){E++;}
        if(a[i] == 0 && b[i] == -1){G++;}
        if(a[i] == 1 && b[i] == -1){J++;}
        if(a[i] == -1 && b[i] == 1){K++;}
    }

    sa = D + J;
    sb = F + K;

    if(sa >= sb){if(sa-sb >= B){sb += B; B = 0;}else{B -= sa - sb; sb = sa;}}
    if(sa <= sb){if(sb-sa >= B){sa += B; B = 0;}else{B -= sb - sa; sa = sb;}}

    if(B % 2 == 1){
        sa += B/2 + 1;
        sb += B/2;
    }else{
        sa += B/2;
        sb += B/2;
    }

    if(sa >= sb){if(sa-sb >= A){sa -= A; A = 0;}else{A -= sa - sb; sa = sb;}}
    if(sa <= sb){if(sb-sa >= A){sb -= A; A = 0;}else{A -= sb - sa; sb = sa;}}

    if(A % 2 == 1){
        sa -= A/2 + 1;
        sb -= A/2;
    }else{
        sa -= A/2;
        sb -= A/2;
    }

    res.push_back(min(sa,sb));

}


int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    for(auto el: res){
        cout << el << "\n";
    }

    return 0;
}