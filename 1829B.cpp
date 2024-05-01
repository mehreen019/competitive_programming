#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],ans=0,cou=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if(r[i]==0) cou++;
            else{
                ans=max(ans,cou);
                cou=0;
            }
        }
        ans=max(ans,cou);
        cout<<ans<<endl;
    }
}
