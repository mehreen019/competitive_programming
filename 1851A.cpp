#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,m,k,h;
    cin>>tst;
    while(tst--){
        cin>>n>>m>>k>>h;
        int r[n],ans=0,st[m];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        int t=1,j=2; bool l=0;
        for(int i=0;i<n;i++){
            int d=h-r[i];
            l=0;
            while(t<m){
            for(j=k+1;j<=m;j++){
                if((j*k-t*k)==d){ ans++; l=1; break; }
            }
            if(l) break;
            t++;
            }
        }
        cout<<ans<<endl;
    }
}
