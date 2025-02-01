#include<bits/stdc++.h>
using namespace std;

/*int bs(long long *a,int l,int h,int k){
    int m;
    while(l<h){
        m=(l+h)/2;
        if(a[m]<k) l=m+1;
        else h=m;
    }
    if(a[l]==k) return l;
    else if(a[l]>k) return l-1;
    else return -2;
}*/

int main(void){
    int tst,n,q;
    cin>>tst;
    while(tst--){
        cin>>n>>q;
        long long r[n],ts=0,a[n];
        for(int i=0;i<n;i++){cin>>r[i]; ts+=r[i];}
        //sort(r,r+n);
        //for(int i=0;i<n;i++){ ts+=r[i]; a[i]=ts; }
        //for(int i=0;i<n;i++){ cout<<a[i]<<" "; }
        //cout<<endl;
        for(int i=0;i<q;i++){
            long long x,s=0,c=0; bool l=1;
            cin>>x;
            if(x>r[n-1] || x==r[n-1]) cout<<ts<<" ";
            else if(x==0) cout<<0<<" ";
            else{
                int f=bs(r,0,n-1,x);
                cout<<a[f]<<" ";
            }
          }
          cout<<endl;
        }
}
