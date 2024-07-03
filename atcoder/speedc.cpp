#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    //cin>>tst;
    //while(tst--){
        int n, ans=LLONG_MAX;
        cin>>n;
        for(int i=sqrt(n); i>=1;i--){
            if(n%i==0){
                ans=min(ans,(n/i)+i-2);
            }
        }
        cout<<ans<<endl;
    //}
}
