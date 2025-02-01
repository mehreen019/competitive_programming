#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int r[n],x=-1,p,y=-1,t,z,cou=1;
    for(int i=0;i<n;i++) cin>>r[i];
    sort(r,r+n);
    //for(int i=0;i<n;i++) cout<<r[i]<<" ";
    t=r[n-1];
    cout<<t<<" ";
    for(int i=2;i<n-1;i++){
        if(r[i]==r[i+1]){ x=r[i]; p=i+2; }
    }
    //cout<<x<<" ";
    for(int i=p;i<n;i++){
        if(r[i]%x==0 && t%r[i]){y=r[i]; z=i; }
    }
    if(x==-1){
        for(int i=2;i<n-1;i++){ if(t%r[i]){ x=r[i]; break; } }
        for(int i=n-2;i>1;i--){ if(r[i]%x==0 && t%r[i]){ y=r[i]; cou=0; break; } }
        if(cou) cout<<1;
        else cout<<y;
    }
    else if(p>n || y==-1) cout<<x;
    else cout<<y;
}
