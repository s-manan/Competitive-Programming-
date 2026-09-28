#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
int arr[t]={0};
for(int i=0;i<t;i++){
    cin>>arr[i];
}
int flag=0;
int m=99999999;
int n=-9999999;
for(int i=0;i<t;i++){
    if(arr[i]>0){
        if(arr[i]<m){
            m=arr[i];
        }
    }
    else if(arr[i]<0){
        if(arr[i]>n){
            n=arr[i];
        }
    }
    else if(arr[i]==0){
        flag=1;
    }
}
if(!flag){
if(m>(-1*n)){
    cout<<-1*n;
}
else{
    cout<<m;
}
}
else{
    cout<<0;
}
}