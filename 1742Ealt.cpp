#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,q;
    cin>>tst;
    while(tst--){
        cin>>n>>q;
        long long r[n],ts=0,a[n];
        for(int i=0;i<n;i++){cin>>r[i]; ts+=r[i]; a[i]=r[i];}
        sort(a,a+n);
        for(int i=0;i<q;i++){
            long long x,s=0,c=0; bool l=1;
            cin>>x;
            if(x>a[n-1] || x==a[n-1]) cout<<ts<<" ";
            else if(x==0) cout<<0<<" ";
            else{
                for(int i=0;i<n;i++){
                    if(r[i]<=x) s+=r[i];
                    else break;
                }
                cout<<s<<" ";
            }
          }
          cout<<endl;
        }
}
