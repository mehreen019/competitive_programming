#include<bits/stdc++.h>
using namespace std;
int p(int i, int n, int* r,int* dp){
    if(i>n) return 0;
    if(dp[i]!=0) return dp[i];

    else{

         d[i+2]= p(i+2,n,r,dp);
         d[i+3]=
        /*
        int t1=r[i],t2=r[i],t3=r[i+1],t4=r[i+1];
        if(i+2<=n) t1+=p(i+2,n,r,dp);
        if(i+3<=n) t2+=p(i+3,n,r,dp);
        dp[i]=max(t1,t2);
        if(i+3<=n) t3+=p(i+3,n,r,dp);
        if(i+4<=n) t4+=p(i+4,n,r,dp);
        dp[i+1]=max(t3,t4);
        cout<<i<<" "<<dp[i]<<" "<<dp[i+1]<<endl;
        return max(dp[i], dp[i+1]);
        */
    }
}

int main(void){
    int n;
    cin>>n;
    int r[n],dp[n+1]={0};
    for(int i=1;i<=n;i++) cin>>r[i];
    int ans=p(1,n, r,dp);
    cout<<ans<<endl;
}
