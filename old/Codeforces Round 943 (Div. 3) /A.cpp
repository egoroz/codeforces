#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


int main(){
    int t;
    std::vector<int> res;
    std::cin >> t;
    for(int n = 0; n < t; ++n){
        int x;
        std::cin >> x;
        int max = 0;
        int t = -10000;
        for(int y = 1;y<x; ++y){
            max = std::max(std::gcd(x, y) + y, max);
            if(max == std::gcd(x, y) + y){t = y;}
        }
        res.push_back(t);
    }

    for(int num : res){
        std::cout << num << "\n";
    }
}