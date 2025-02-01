#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int n,k;
    cin>>n>>k;
    int dp[k+6], r[n+6];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    sort(r,r+n);
    dp[0]=0;
    for(int i=1;i<=k+3;i++){
        dp[i]=0;
        for(int j=0;r[j]<=i && j<n;j++){
            if(!dp[i-r[j]]){
                dp[i]=1;
                break;
            }
        }
    }

    if(dp[k]) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}
