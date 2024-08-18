#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main(){
    int t;
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
        bool flag = true;
        string ans = "YES";
        for (int i = 0; i < nums.size() - 1; ++i){
            if (nums[i] > nums[i+1] && flag){flag = false;}
            else if(nums[i] > nums[i+1] && !flag){ans = "NO";}
        }
        if(nums[n-1] > nums[0] && !flag){ans = "NO";}
    cout << ans << "\n";
    

    }


    return 0;
}