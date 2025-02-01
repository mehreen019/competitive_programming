#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,a,b,w;
    cin>>tst;
    while(tst--){
        int s=0;
        cin>>n>>a>>b>>w;
        if(n==0){ if(a||b||w)cout<<1<<endl;
                  else cout<<0<<endl; }
        else{
            s=n;
            if(a>=b && b!=0){ s=2*s+2*b; b=0; n=0; a-=b;}
            else if(b>=a && a!=0){ s=2*s+2*a; a=0; n=0; b-=a; }
            else if(a==0 && b==0 && w) s+=n;
            if(a || b || w ) s++;
            cout<<s<<endl;
        }
    }
}
