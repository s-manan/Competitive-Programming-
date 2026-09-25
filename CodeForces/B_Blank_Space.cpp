#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your logic here
    int n;
    cin>>n;
    int c=0,max=0;
    while(n--){
        int a;
        cin>>a;
        if(a==1) c=0;
        else c++;
        if(c>max) max=c;
    }
    cout<<max<<endl;
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
