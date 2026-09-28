#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int gcd(int a, int b){
    while(b!=0){
        int temp = a%b;
        a=b;
        b=temp;
    }
    if(a<0) a = -a;
    return a;
}

void solve() {
    // Write your logic here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    bool condition=false;
    for(int i=0;i<n;i++){
        int j=0;
        while(j!=i){
            if(gcd(arr[i],arr[j])<=2){
                condition=true;
                cout<<"Yes"<<endl;
                break;
            }
            else j++;
        }
        if(condition) break;
    }
    if(!condition) cout<<"No"<<endl;
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
