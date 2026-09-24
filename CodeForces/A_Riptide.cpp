#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=0;
        while(true){
            if(a==b||b==c||a==c) {cout<<d<<"\n";
                break;}
            if(a>b && a>c) a-=1;
            else if(b>c) b-=1;
            else c-=1;
            if(a<b && a<c) a+=1;
            else if(b<c) b+=1;
            else c+=1;
            d++;
        }
    }
}