#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    //cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int r[n],pre[n],sum=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
            pre[i]=sum;
        }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            ans+=mp[pre[i]%m];
            mp[pre[i]%m]++;
            mp[(sum+pre[i])%m]++;
        }
        cout<<ans<<endl;

    }
}
