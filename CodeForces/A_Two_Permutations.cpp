#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your logic here
    int n,m=1;
    cin>>n;
    int a,b;
    cin>>a>>b;
    if (n==a&&a==b) cout<<"Yes"<<endl;
    else if(n<a || n<b|| n<a+b) cout<<"No"<<endl;
    else if(n-a-b<=1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
