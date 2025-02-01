#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,q,x,y,k,tst;
    cin>>tst;
    while(tst--){
        cin>>n>>q;
        int r[n],x,sum=0,tsum=0,m;
        for(int i=0;i<n;i++){ cin>>x; sum+=x; r[i]=sum;}
        while(q--){
            tsum=sum;
            cin>>x>>y>>k;
            if(x==1) m=r[y-1];
            else m=r[y-1]-r[x-2];
            tsum-=m;
            tsum+=(k*((y-x)+1));
            if(tsum%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
