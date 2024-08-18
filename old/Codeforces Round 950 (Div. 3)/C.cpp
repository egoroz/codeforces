#include <bits/stdc++.h>

using namespace std;
vector<string> result;
void solve(){
    int n, m;
    cin >> n;

    vector<int> a;
    vector<int> b;
    vector<int> d;
    string str;
    
   
    std::getline(std::cin, str); // пустая строка
    std::getline(std::cin, str);
    std::istringstream is1(str);

    std::getline(std::cin, str);
    std::istringstream is2(str);

    cin >> m;

    std::getline(std::cin, str);
  
    std::getline(std::cin, str);
    std::istringstream is3(str);

    int num;
    while(is1 >> num){
        a.push_back(num);
    }
    while(is2 >> num){
        b.push_back(num);
    }
    while(is3 >> num){
        d.push_back(num);
        
    }

    vector<int> e(n);
    for( int i = 0; i < n; ++i){
        if(a[i] != b[i]){e[i] = b[i];}
    }

    int k = d[m-1];
    // for(auto el : e){    cout << "NUM_e = " << el << "\n";
    // }

    sort(e.begin(), e.end());
    sort(d.begin(), d.end());

    string res = "YES";
    bool flag = false;
    for(int i = 0; i < n; ++i){
        if(k == e[i] || k == b[i]){flag = true;}
    }
    if(!flag){res = "NO";}

    int j = 0;
    for(int i = 0; i < n; ++i){
        if(e[i] == 0){continue;}
        if(j != m &&e[i] == d[j]){e[i] = 0; d[j] = 0;j++;}
        else if(e[i] < d[j]){res = "NO";break;}
        while(j != m && e[i] > d[j] ){j++;}
        if(j != m && e[i] != 0 && e[i] == d[j]){e[i] = 0; d[j] = 0;j++;}
        else if(j != m &&  e[i] != 0 && e[i] < d[j]){res = "NO";break;}
        if(j == m && e[i] != 0){res = "NO"; break;}
    }

    result.push_back(res);
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    for(auto el: result){
        cout << el << '\n';
    }
    return 0;
}