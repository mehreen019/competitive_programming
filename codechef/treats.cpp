#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int a[n],b[n], ans=0;
        vector<int> rem(m,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            rem[a[i]%m]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            ans+=rem[(m-(b[i]%m))%m];
        }
        cout<<ans<<endl;
    }
}
