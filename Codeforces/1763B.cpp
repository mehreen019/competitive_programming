#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int h[n],p[n],t,s,q,i; bool l=0;
        for(int i=0;i<n;i++) cin>>h[i];
        for(int i=0;i<n;i++) cin>>p[i];
        sort(h,h+n); sort(p,p+n);
        s=k; t=n,q=k,i=0;
        while(s>0 && i<n){
            if(h[i]>s){ s-=p[i]; q+=s;}
            i++;
        }
        if(q>=h[n-1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
