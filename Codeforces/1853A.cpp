#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],ans=INT_MAX;
        bool l=1;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=1;i<n;i++){
            if(r[i]>=r[i-1]) ans=min(ans, ((r[i]-r[i-1])/2)+1);
            else { l=0; break; }
        }
        if(l==0) cout<<0<<endl;
        else if(l && ans==0) cout<<1<<endl;
        else cout<<ans<<endl;
    }
}
