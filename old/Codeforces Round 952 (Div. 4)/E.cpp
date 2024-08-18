#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;

        long long max_placements = 0;

        // Находим все делители k
        for (long long a = 1; a * a * a <= k; ++a) {
            if (k % a == 0) {
                for (long long b = a; b * b <= k / a; ++b) {
                    if (k % (a * b) == 0) {
                        long long c = k / (a * b);

                        // Проверяем размещение
                        long long placements = (x / a) * (y / b) * (z / c);
                        max_placements = max(max_placements, placements);
                    }
                }
            }
        }

        cout << max_placements << endl;
    }

    return 0;
}