#include<bits/stdc++.h>
using namespace std;
void cal(int* r,int i,int n,int* dp){
    if(i>=n) return;
    if(dp[i]!=0) return;

    int t1,t2;
    cal(r, i+2,n, dp);
    cal(r,i+3,n,dp);
    t1= r[i]+dp[i+2];
    t2= r[i]+dp[i+3];
    dp[i]=max(t1,t2);
    //cout<<i<<" "<<dp[i]<<" "<<dp[i+1]<<" ";
    cal(r,i+1,n,dp);
}
int main(void){
    int n;
    cin>>n;
    int r[n+3]={0};
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    int dp[n+3]={0};
    cal(r,0,n,dp);
    for(int i=0;i<n;i++) cout<<dp[i]<<" ";
    cout<<max(dp[0],dp[1])<<endl;

}
