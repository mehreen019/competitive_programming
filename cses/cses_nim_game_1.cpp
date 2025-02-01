#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n;
        int r[n+6], xr;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        xr=r[0];
        for(int i=1;i<n;i++){
            xr^=r[i];
        }

        if(xr) cout<<"first"<<endl;
        else cout<<"second"<<endl;
    }
}
