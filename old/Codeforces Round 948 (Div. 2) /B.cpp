#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> h {1,1,3,5,11,21,43,85,171,341,683,1365,2731,5461,10923,21845,43691,87381,174763,349525,699051,1398101,2796203,5592405,11184811,22369621,44739243,89478485,178956971,357913941,715827883,1431655765};
    vector<int> st {1,2,3,6,11,22,43,86,171,342,683,1366,2731,5462,10923,21846,43691,87382,174763,349526,699051,1398102,2796203,5592406,11184811,22369622,44739243,89478486,178956971,357913942,715827883,1431655766};
    vector<int> ns;
    vector<vector<int>> res;
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;
        // vector<int> r;
        int i = 0;
        for(; i < h.size(); ++i){
            if (x < h[i]){break;}
        }
        if(i > 0){
            i = i-1;
        }
        cout << "i = "<< i<<"\n";
    
        vector<int> r(i+1);
        r[i] = 1;


        for(int j = i-1; j >=0; --j){
            int k = 0;
            int y = x - st[j];
            while(true){
                
            if(y%(2*(h[j+1] + h[j])) <= h[j]){r[j] = 1;break;}
            if( h[j] <= y%(2*(h[j+1] + h[j])) <=  h[j] + h[j+1]){r[j] = 0;break;}
            if(h[j] + h[j+1]<= y%(2*(h[j+1] + h[j])) <= h[j]*2 + h[j+1]){r[j] = -1;break;}
            k++;
            }
        }

        res.push_back(r);
    }


        for(auto e: res){
            cout << e.size()<< '\n';
            for(auto ee : e){
            cout << ee << ' ';
            }
            cout << "\n";
        }
    return 0;
}