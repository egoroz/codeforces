#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>


int main(){
    std::vector<std::vector<int>> result;
    // std::string h;
    int t;
    int n;
 


    std::cin >> t;
    // std::cout << t << "\n";
    for(int i = 0; i < t; ++i){
        std::vector<int> a{};
        // std::vector<char> b{};
        std::cin >> n;
        // std::cout << n << "\n";
        std::string str;
        std::getline(std::cin, str); // пустая строка

        std::getline(std::cin, str);

        // std::cout << str << "\n";
        std::istringstream is(str);

        int num;
        while(is >> num){
            a.push_back(num);
        }

        std::vector<int> p_res;

        p_res.push_back(1000);
        int cumsum = 1000;

        for(int j = 0; j < a.size(); ++j){
            p_res.push_back(cumsum+=a[j]);
        }


        result.push_back(p_res);
    }

    for(auto p_res : result){
        for(auto num : p_res){
        std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}