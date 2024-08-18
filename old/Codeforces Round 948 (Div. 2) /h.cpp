#include <iostream>
#include<vector>

int main(){

    std::vector<int> arr(32);
    std::vector<int> c(31);
    arr[0] = 1;
    arr[1] = 1;
    std::cout << 1 << ',' << 1 << ",";
    for(int i = 2; i < 32; ++i){
    arr[i] = arr[i-1] + arr[i-2]*2;
    std::cout << arr[i] << ',';
}



std::cout << '\n';

    int s =1;
for(int i = 0; i < 32; ++i){
    s+=arr[i];
    std::cout << s << ',';
}
}