#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,h,k, dist=0, ans=0;
        cin>>n>>k>>h;

        for(int i=1;i<=n;i++){
            dist=(h-i);

            if(dist>(k-1)*(i-1)) continue;

            if(dist%(k-1)==0) dist/=(k-1);
            else{ dist/=(k-1); dist+=1; }

            ans+=max((i-dist),0LL);
            //cout<<ans<<endl;
            if(i==h-1) break;
        }
        if(n>=h){
            ans+=(n)*(n-h+1);
        }
        cout<<max(ans,0LL)<<endl;
    }
}
