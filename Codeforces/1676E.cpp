#include<bits/stdc++.h>
using namespace std;

int bs(int *a,int l,int h,int k){
    int m;
    while(l<h){
        m=(l+h)/2;
        if(a[m]<k) l=m+1;
        else h=m;
    }
    if(a[l]==k || a[l]>k) return l;
    else return -2;
}

int main(void){
    int tst,n,q;
    cin>>tst;
    while(tst--){
        cin>>n>>q;
        int r[n],a[n];
        long long ts=0;
        for(int i=0;i<n;i++){cin>>r[i]; }
        sort(r,r+n);
        for(int i=0;i<n;i++){ ts+=r[n-i-1]; a[i]=ts; }
        //for(int i=0;i<n;i++){ cout<<a[i]<<" "; }
        //cout<<endl;
        for(int i=0;i<q;i++){
            long long x,s=0,c=0; bool l=1;
            cin>>x;
            if(x>ts) cout<<-1<<endl;
            else if(x==ts) cout<<n<<endl;
            else{
                int f=bs(a,0,n-1,x);
                cout<<f+1<<endl;
            }
          }
        }
}
