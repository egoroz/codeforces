#include <iostream>
#include <vector>
#include <numeric>


int main(){
    std::vector<int> result;
    int t;
    int n, m;

    std::cin >> t;
    

    for(int i = 0; i < t; ++i){
        int res = 0;
        std::cin >> n >> m;
        for (int b = 1; b <= m; ++b){
            for(int B = 1; B*b <= n; ++B){
                if(((B+1)%(std::gcd(B*b,b)))==0){++res;}
            }
        }
        result.push_back(res);
    }   
    for(auto num : result){
        std::cout << num << "\n";
    }

    return 0;
}