#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(;t > 0; --t){
        int x, y;
        int res = 0;

        cin >> x >> y;

        res += y / 2;

        int h = 0;
        if(y % 2 != 0){++res; h = 4;}

        h += 7 * res;
        x -= h;

        if(x != 0 && y == 0){if(x % 15 != 0){++res;} res += (x)/15; cout << res<< "\n";}
        else if (x <= 0) {cout << res << "\n";}
        else{if(x % 15 != 0){++res;} res += (x)/15; cout << res << "\n";}
        
    }

    return 0;
}