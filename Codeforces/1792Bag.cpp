#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,a,b,w;
    cin>>tst;
    while(tst--){
        cin>>n>>a>>b>>w;
        int t=a+b+w,ans=0,q=min(a,b);
        if(n==0 && t) cout<<1<<endl;
        else{
            ans=n+q; t-=q;
            if(t>ans){t-=ans; ans+=ans; }
            else if(t<=ans){ ans+=t; t=0;}
            if(t) ans++;
            cout<<ans<<endl;
        }
    }
}
