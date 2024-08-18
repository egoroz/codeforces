#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>

using namespace std;
int main(){
    int t;
    vector<string> res;
    cin >> t;

    while(t--){
        int n;
        vector<int> nums;
        cin >> n;

        string str;
        
        getline(cin, str);
        getline(cin, str);
        istringstream s{str};


        int num;
        while(s >> num){
            nums.push_back(num);
        }
    string ans = "YES";

    map<int, vector<int>> a;


    int min1 = 1000000001;
    int min2 = 1000000001;
    for (int i = 0; i < nums.size(); ++i){
        if(nums[i] < min1){min1 = nums[i];}
    }

    for (int i = 0; i < nums.size(); ++i){
        if(nums[i] < min2 && nums[i] % min1 != 0){min2 = nums[i];}
    }

    if (min2 > 1000000000){min2 = min1;}

    for (int i = 0; i < nums.size(); ++i){
        if (!(nums[i] % min1 == 0 || nums[i] % min2 == 0)){ans = "NO";}
    }

    res.push_back(ans);

    }

    for(auto el : res){
        cout << el << "\n";
    }
    


    return 0;
}