#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], ans=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(i%2==0){
                ans=max(ans, r[i]);
            }
        }
        cout<<ans<<endl;
    }
}
