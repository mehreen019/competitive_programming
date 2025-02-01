#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,q,t,x,y;
    cin>>n;
    long long r[n+1],s[n+1],a[n+1],ans=0;
    r[0]=0; a[0]=0; s[0]=0;
    for(int i=1;i<=n;i++){
        cin>>r[i];
        ans+=r[i];
        s[i]=ans;
    }
    sort(r,r+n+1);
    //for(int i=0;i<n;i++) cout<<r[i]<<" ";
    ans=0;
    for(int i=1;i<=n;i++){
        ans+=r[i];
        a[i]=ans;

    }
    //cout<<endl;
    cin>>q;
    while(q--){
        cin>>t>>x>>y;
        if(t==1){
            cout<<s[y]-s[x-1]<<endl;
        }
        else cout<<a[y]-a[x-1]<<endl;
    }
}
