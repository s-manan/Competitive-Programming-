#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int operations = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] % 2 == a[i + 1] % 2) {
            operations++;
        }
    }
    cout << operations << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
