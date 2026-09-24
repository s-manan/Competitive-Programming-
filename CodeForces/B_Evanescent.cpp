#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> arr(n);
        vector<char> hash(27,0);
        for(int i=1;i<n-1;i++){
            cin>>arr[i];
            hash[arr[i]-'a']+=1;
        }
        int f=arr[0];
        int l=arr[n-1];
        for(int i=0;i<27;i++){
            if(hash[i]==1 && hash[i]!=f && hash[i]!=l){
                hash[i]-=1;
                break;
            }
        }
        int sum=0;
        if(hash[f-'a']==0) sum+=1;
        if(hash[l-'a']==0) sum+=1;
        for(int i=0;i<26;i++){
            if(hash[i]>=1){
                sum+=1;
            }
        }
        cout<<sum;
    }
    return 0;
}