#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m, ans=INT_MAX;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n-m+1;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(a[i+j]!=b[j]){ cnt++;}
                //cout<<a[i+j]<<" "<<b[j]<<endl;
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
    }
}
