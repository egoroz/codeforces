#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main(){
    int t_res = 0;
    int min_len = INT_MAX;
    int n;
    cin >> n;

    string str;
    
 getline(cin, str);
    getline(cin, str);
    istringstream s{str};


    int num;
    vector<int> nums;
    while(s >> num){
        nums.push_back(num);
       // cout << num;
    }
    
    for(int t = *min_element(nums.begin(), nums.end()); t <= *max_element(nums.begin(), nums.end()); ++t){
            int len = 0;
           // cout << "\n";
        for(int i = 0; i < nums.size(); ++i){
            if(abs(nums[i] - t) > 1)
                len += min(abs(nums[i] - t - 1),abs(nums[i] - t + 1));
            //cout << len <<' ';

        }
        //cout << "\n";
        if(min_len > len){min_len = len; t_res = t;}        
    }

    cout << t_res << ' ' << min_len;

    return 0;
}