#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void print(vector<vector<bool>> res){
    vector<ll> r;
    for(auto arr: res){
        ll num = 0;
        for(int i = 0; i < arr.size(); ++i){
            if(arr[i]){num += (ll)pow(2,i);}    
        }
        r.push_back(num);
    }

    cout << r.size() << '\n';

    reverse(r.begin(), r.end());
    for(auto el : r){
        cout << el << ' ';
    }
    cout << '\n';
}


vector<bool> toBin(ll x, int q){
    vector<bool> a(q);
    // print({a});
    // cout << x << '\n';
    int i = 0;
    while(x > (ll)0 && i < q){
        a[i] = false;
        // cout << "цикл\n"; 
        if((ll)x%(ll)2 == (ll)1){a[i] = true;}
        x = (ll)(x/(ll)2);
        // cout << "x = " << x << "a = \n";
        // print({a});
        i++;
    }
    // print({a});
    return a;
}

bool comp(vector<bool> b, vector<bool>c){
    // bool r = true;
    for(int i = b.size()-1; i >= 0; --i){
        if(b[i] == true && c[i] == false){return false;}
        else if(b[i] == false && c[i] == true){return true;}
    }
    return true;
}



void solve(){
    vector<vector<bool>> res;
    ll n;

    cin >> n;

    int q = 0;
    bool flag = false;
    while(n >= pow(2,q)){
        if(n == pow(2,q)){flag = true;}
        q++;
    }
    // q++;

    vector<bool> a(q); //n
    vector<bool> b(q); //prev

    a = toBin(n, q);
    b = a;
    res.push_back(a);
    // print(res);
    // res.push_back(b);

    while(true){
        // if(q == 1){break;}
        if(flag){break;}
        // bool flag = true;
        // int can =-1;
        vector<bool> c(q);
        for(int i = 0; i < q; ++i){
            c[i] = false;
            // if(b[i] == true){c[i] = false;}
            if(b[i] == false && a[i] == true){c[i] = true;}
        }
        // cout << "\n";
        for(int i = q-1; i >= 0; --i){
            if(a[i] == true){
                c[i] = true;
                if(b[i] == false){continue;}
                if(comp(b,c)){c[i] = false;} //
                
            }
                // if(c[i]){cout << 1;}
                // else{cout << 0;}
        }
        // cout << "\n";
        b = c;
        res.push_back(c);
        if(b[q-1] == false){break;}
    }

    print(res);
    // cout << n << '\n';



    // vector<int> a;
    // vector<int> b;
    
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