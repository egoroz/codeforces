#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

// vector<int> res;
const ll MOD7 = 1e9 + 7;

////////////////////  LIBRARY CODE ////////////////////
const ll MOD = MOD7; //CHANGE MOD SETTING!!!
ll norm(ll x) { return ((x%MOD) + MOD) % MOD; }
template <class T>
T power(T a, ll b, T res = 1) {
  for (; b; b /= 2, (a *= a) %= MOD)
    if (b & 1) (res *= a) %= MOD;
  return res;
}
struct Mint {
  ll x;
  Mint(ll _x = 0) : x(norm(_x)) {}
  Mint operator-() const { return Mint(norm(MOD - x)); }
  Mint inv() const { return power(*this, MOD - 2); }
  Mint &operator*=(const Mint &rhs) { return x = x * rhs.x % MOD, *this; }
  Mint &operator+=(const Mint &rhs) { return x = norm(x + rhs.x), *this; }
  Mint &operator-=(const Mint &rhs) { return x = norm(x - rhs.x), *this; }
  Mint &operator/=(const Mint &rhs) { return *this *= rhs.inv(); }
  Mint &operator%=(const auto &_) { return *this; }
  friend Mint operator*(Mint lhs, const Mint &rhs) { return lhs *= rhs; }
  friend Mint operator+(Mint lhs, const Mint &rhs) { return lhs += rhs; }
  friend Mint operator-(Mint lhs, const Mint &rhs) { return lhs -= rhs; }
  friend Mint operator/(Mint lhs, const Mint &rhs) { return lhs /= rhs; }
  friend Mint operator%(Mint lhs, const auto &_) { return lhs; }
  friend istream &operator>>(istream &input, Mint &z) { return input >> z.x, input; }
};
ostream& operator<<(ostream& out, const Mint& x)
{
  return out << x.x;
}
 
const int NMAX = 200010;
ll factorialcompute[NMAX];
ll invfactorialcompute[NMAX];
ll binpow(ll a, ll pow, ll mod) {
    if (pow <= 0)
        return 1;
    ll p = binpow(a, pow / 2, mod) % mod;
    p = (p * p) % mod;
 
    return (pow % 2 == 0) ? p : (a * p) % mod;
}
ll inverse(ll a, ll mod) {
    if (a == 1) return 1;
    return binpow(a, mod-2, mod);
}
ll C(int a, int b, ll mod = MOD) {
    if(a < 0 || b < 0) return 0;
    if ( a < b) return 0;
    ll cur = factorialcompute[a];
    cur *= invfactorialcompute[b];
    cur %= mod;
    cur *= invfactorialcompute[a - b];
    cur %= mod;
    return cur;
}
void precomputeFactorial() {
    factorialcompute[0] = 1;
    invfactorialcompute[0] = 1;
    for(int i = 1; i < NMAX; i++) {
        factorialcompute[i] = factorialcompute[i-1] * i;
        factorialcompute[i] %= MOD;
    }
    invfactorialcompute[NMAX-1] = inverse(factorialcompute[NMAX-1], MOD);
    for(int i = NMAX-2; i > -1; i--) {
        invfactorialcompute[i] = invfactorialcompute[i+1] * (i+1);
        invfactorialcompute[i] %= MOD;
    }
}
 
 
///////////////////////////////////////////////////////

void solve(){

    int n, k;
    Mint res = 0;

    cin >> n >> k;

    vector<int> a(n);

    int c0 = 0;
    int c1 = 0;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] == 1){c1++;}
        else{c0++;}
    }

    int m = k/2 + 1;


    for(int i = m; i <= k; ++i){
        int q = min(i, c1);
        int w = k - q;
        if(c1 < i){break;}
        if(c0 < w){continue;}
        else{res += C(c1, q) * C(c0, w);}
    }

    cout << res << '\n';
    
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