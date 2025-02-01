#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=2e5+5;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k, ans=0;
        cin>>n>>k;
        vector<int>dp(n+5, 0), val(n+5),prefix(n+5);
        prefix[0]=0;
        for(int i=1;i<=n;i++){
            cin>>val[i];
            prefix[i]=prefix[i-1]+val[i];
        }

        for(int i=n;i>0;i--){
            if(val[i]>k){
                dp[i]=dp[i+1];
                continue;
            }

            int l=i,h=n,mid,j=l;
            while(l<=h){
                mid=(l+h)/2;
                if(prefix[mid]-prefix[i-1]>k){
                    h=mid-1;
                    //cout<<"ok";
                }
                else{ l=mid+1;}
                //cout<<i<<" "<<mid<<" "<<l<<" "<<h<<endl;
            }
            //cout<<i<<" "<<l<<" "<<dp[l+1]<<endl;
            dp[i]=dp[l+1]+(l-i);
        }
        for(int i=1;i<=n;i++){
            ans+=dp[i];
            //cout<<dp[i]<<endl;
        }
        cout<<ans<<endl;
    }
}
