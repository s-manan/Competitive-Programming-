#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your logic here
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        x^=c;
    }
    if(x==0) cout<<0<<endl;
    else{
        if(n%2==0) cout<<-1<<endl;
        else{
            cout<<x<<endl;
        }
    }
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
