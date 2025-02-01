#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
        cin>>n;
        int r[n],ans=0,cnt=0,j,x=LONG_MAX; bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        for(int i=0;i<n;i++){
            for(j=i+1;j<n;j++){
            if(r[j]-r[i]<=5){ l=1; ans=max(ans,j-i);
                if(r[j]!=r[i]){
                    x=min(x,j);
                }
             }
            else if(l==0){ break; }
            else { i=x-1; x=LONG_MAX; l=0; break;}
            //cout<<x<<" ";
            }
            if(j==n) break;
        }
        cout<<ans+1;
}
