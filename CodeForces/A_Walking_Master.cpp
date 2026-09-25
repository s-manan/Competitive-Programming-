#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your logic here
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2&&y2==y1) cout<<0<<endl;
    else if(y2<y1) cout<<-1<<endl;
    else if(y2-y1==0) {
        if(x2<x1) cout<<x1-x2<<endl;
        else cout<<-1<<endl;
    }
    else if(x1+(1*(y2-y1))<x2) cout<<-1<<endl;
    else{
        cout<<2*(y2-y1)+x1-x2<<endl;
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
