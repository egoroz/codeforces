#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>


// ПОЧТИ РАБОТАЕТ )))

int main(){
    std::vector<std::string> result;
    // std::string h;
    int t;
 


    std::cin >> t;
    // std::cout << t << "\n";
    for(int i = 0; i < t; ++i){
        int n, k, B, S;
        std::cin >> n >> k >> B >> S;

        // std::cout << "n = "<<n<<" k = "<<k <<" B = "<<B<<" S = "<< S<< "\n";

        std::vector<int> res_B(200002, 0);
        std::vector<int> res_S(200002, 0);

        std::vector<int> p{};
        std::vector<int> a{};
        std::string str;
        std::getline(std::cin, str); // пустая строка

        std::getline(std::cin, str);

        std::istringstream is(str);

        int num;
        while(is >> num){
            p.push_back(num);
        }

        std::getline(std::cin, str);

        std::istringstream is2(str);

        while(is2 >> num){
            a.push_back(num);
        }

        // res_B[0] = a[p[B-1]-1];
        // res_S[0] = a[p[S-1]-1];
        int tB = B;
        int tS = S;
        // int u = 1;
        for(int u = 0; u < n ; ++u){
            // int tB = B;
            // int tS = S;
            res_B[u] = a[p[B-1]-1];
            res_S[u] = a[p[S-1]-1];
            B = p[B-1];
            S = p[S-1];
            // res_B[u-1] = a[tB] * (k-u) + 
        }

        B = tB;
        S = tS;
        int next_B = 0;
        int next_S = 0;
        for(int u = 0; u < n ; ++u){
            // int tB = B;
            // int tS = S;
            res_B[u] = next_B + a[p[B-1]-1];
            res_S[u] = next_S + a[p[S-1]-1];
            next_B += a[p[B-1]-1];
            next_S += a[p[S-1]-1];
            res_B[u] = (k - u - 1) * a[p[B-1]-1];
            res_S[u] = (k - u - 1) * a[p[S-1]-1];
            B = p[B-1];
            S = p[S-1];
            // res_B[u-1] = a[tB] * (k-u) + 
        }

        int max_B = 0;
        int max_S = 0;
        for(int u = 0; u < n + 1;++u){
            max_B = std::max(max_B, res_B[u]);
            max_S = std::max(max_S, res_S[u]);
        }

        if(max_B > max_S){result.push_back("Bodya");}
        else if(max_B < max_S){result.push_back("Sasha");}
        else{result.push_back("Draw");}
        
        
    }

    for(auto num : result){
        std::cout << num << "\n";

    }

    return 0;
}