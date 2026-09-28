#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int ans = 0;

        for (int i = 0; i < 10; i++) {
            string s;
            cin >> s;

            for (int j = 0; j < 10; j++) {
                if (s[j] == 'X') {
                    int d = min({i, j, 9 - i, 9 - j});
                    ans += d + 1;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}