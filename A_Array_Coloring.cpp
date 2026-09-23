#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    // Write your code for each test case here
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(sum %2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t; // Remove this line if there is only 1 test case
    while (t--) {
        solve();
    }
    return 0;
}
