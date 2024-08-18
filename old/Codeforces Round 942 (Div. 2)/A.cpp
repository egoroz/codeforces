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
        std::vector<int> a{};
        std::vector<int> b{};
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
            
        
        std::getline(std::cin, str);
        std::istringstream is2(str);

        while(is2 >> num){
            b.push_back(num);
        }

        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());


        int min_new = 0;
        for(int i = 0; i < n; ++i){
            bool ok = true;
            for(int j = 0; j < n; ++j){
                if (a[j] > b[j]){ok = false;}
            }
            if(!ok){++min_new;}
            else{break;}

            a.pop_back();
            a.push_back(1);
            std::sort(a.begin(), a.end());
        }
        result.push_back(min_new);
    }

    for(auto num : result){
        std::cout << num << "\n";
    }

    return 0;
}