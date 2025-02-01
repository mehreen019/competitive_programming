#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int r[n],ans=0,cou=1;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        for(int i=1;i<n;i++){
            if((r[i]-r[i-1])<=k){
                cou++;
               // i++;
            }
            else {ans=max(ans,cou);
                cou=1;}
           // cout<<ans<<" ";
        }
        ans=max(ans,cou);
        if(ans==0) cout<<0<<endl;
        else cout<<n-ans<<endl;
    }
}
