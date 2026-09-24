#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    // Write your code for each test case here
    int n;
    cin>>n;
    int c=0;
    vector<int> arr(n);
    int mul=1;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        mul*=arr[i];
    }
    if(mul==-1){
        c++;
        for(int i=0;i<n;i++){
            if(arr[i]==-1){
                arr[i]=1;
                break;
            }
        }
    } 
    int sum=0;
    for(int d:arr) sum+=d;
    if(n==1 && arr[0]==-1) c++;
    else if(n==2){
        if((arr[0]==-1&&arr[1]==1)||(arr[1]==-1&&arr[0]==1)) c++;
        else if(arr[0]==-1&&arr[1]==-1) c+=2;
    }
    while(1){
        if(sum<0 && n>=3){
            sum+=4;
            c+=2;
        }
        else break;
    }
    cout<<c<<endl;
}

int main() {
    // Optimize standard input/output streams for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Remove or comment out if there is only 1 test case
    while (t--) {
        solve();
    }

    return 0;
}
