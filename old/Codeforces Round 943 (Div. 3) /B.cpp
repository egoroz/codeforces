#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>


int main(){
    std::vector<int> result;
    // std::string h;
    int t;
    int n;
 


    std::cin >> t;
    // std::cout << t << "\n";
    for(int i = 0; i < t; ++i){
        std::vector<char> a{};
        std::vector<char> b{};
        std::cin >> n;
        // std::cout << n << "\n";
        std::string str;
        std::getline(std::cin, str); // пустая строка

        std::getline(std::cin, str);

        // std::cout << str << "\n";
        std::istringstream is(str);

        char num;
        while(is >> num){
            a.push_back(num);
        }
            
        
        std::getline(std::cin, str);
        std::istringstream is2(str);

        while(is2 >> num){
            b.push_back(num);
        }

        int k = 0;
        int u = 0;
        for(int j = 0; j < a.size(); ++j){
            bool flag = false;
            
            for(; u < b.size(); ++u){
                if(b[u] == a[j]){++k; ++u; break;}
                if(u == b.size() - 1){flag = true; break;}
            }
            if (flag){break;}
        }

        result.push_back(k);
    }

    for(auto num : result){
        std::cout << num << "\n";
    }

    return 0;
}