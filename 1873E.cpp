#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int r[n+1],ans=0,prev=0,preid=1,j,res=0;
        r[0]=0; bool l=0;
        for(int i=1;i<=n;i++) cin>>r[i];
        sort(r+1,r+n+1);
        for(int i=2;i<=n;i++){
            prev=ans;
            j=i;
            ans=ans+((r[i]-r[preid])*(i-1));
            if(ans>k){ l=1; break;}
            preid=i;
        }
        if(l==0){
            res=(k-ans)/n;
            res+=r[preid];
        }
        else{
            res=(k-prev)/preid;
            res+=r[preid];
        }
        cout<<res<<endl;
    }
}
