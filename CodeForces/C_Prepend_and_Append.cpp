#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your logic here
    int n;
    cin>>n;
    string a;
    cin>>a;
    int p1=0,p2=n-1;
    for(int i=0;i<=n/2;i++){
        if(a[p1]!=a[p2]){
            p1++;
            p2--;
        }
        else{
            cout<<p2-p1+1<<endl;
            break;
        }
    }
    if(p1>p2&&n%2==0) cout<<0<<endl;
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
