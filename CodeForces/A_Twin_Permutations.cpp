#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your logic here
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cout<<n-a+1<<" ";
    }
    cout<<endl;
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
