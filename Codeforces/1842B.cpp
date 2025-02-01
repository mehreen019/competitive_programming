#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n>>m;
        long long r[3*n+1],ans=0;
        for(int i=1;i<=3*n;i++) cin>>r[i];
        bool l=1;
        for(int i=1;i<=3*n;i++){
            if(ans==m) { break;}
            else if(ans>m){ l=0; break;}
            if((ans|r[i])<=m) { ans=ans|r[i];}
            else if(ans<m){ i+=n-1; }
            cout<<ans<<" ";
        }
        if(l) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
