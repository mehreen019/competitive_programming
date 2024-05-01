#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,sh,sm,x,y,p,q,fh,fm;
    cin>>tst;
    while(tst--){
            x=0; y=0;
        cin>>n>>sh>>sm;
        for(int i=0;i<n;i++){
            cin>>p>>q;

            if(q<sm){q=q+60; p-=1;}
            if(p<sh) p=p+24;
            if(i==0) {fh=p; fm=q;
            x=p-sh; y=q-sm;
            }

            if((p-sh)<x){ x=p-sh; y=q-sm;}
cout<<x<<" "<<y<<endl;
        }
        cout<<x<<" "<<y<<endl;
    }
}
