#include<bits/stdc++.h>
using namespace std;
int r[4001]={}, l[3];

int dp(int n){
    if(n==0) return r[n]=0;
    if(n<0) return INT_MIN;
    if(r[n]!=NULL) return r[n];

    int ans=INT_MIN;
    for(int i=0;i<3;i++){
        ans=max(1+dp(n-l[i]), ans);
    }

    return r[n]=ans;
}

int main(void){
    int n,ans=INT_MIN;
    cin>>n;
    for(int i=0;i<3;i++) cin>>l[i];
    cout<<dp(n);
    //for(int i=0;i<101;i++) cout<<r[i];
}
