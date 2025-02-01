#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=1000000007;

int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        int n,k,d;
        cin>>n>>k>>d;
        int dp[n+5]={0}, dpp[n+5]={0}, ans=0;

        for(int i=1;i<=k;i++){
            dp[i]=1;
            if(i<d) dpp[i]=1;
        }

        dp[0]=0; dpp[0]=0;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=k && j<=i;j++){
                cout<<dp[i]<<endl;
                dp[i]=((dp[i] + dp[i-j]) % MOD);
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<d && j<=i;j++){
                //cout<<dpp[i]<<endl;
                dpp[i]=((dpp[i]+dpp[i-j]) % MOD);
            }
        }

        cout<<((dp[n]-dpp[n] + MOD) % MOD)<<endl;
    }
}
//1 1
