#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],f;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        f=r[0];
        bool ans=1;
        for(int i=1;i<n-1;i++){
            r[i-1]-=f;
            r[i]-= 2*f;
            r[i+1]-= f;
            //cout<<r[i-1]<<" "<<r[i]<<" "<<r[i+1]<<endl;
            if(r[i-1]<=0 && r[i+1]<=0 && r[i]!=0){ans=0; break;}
            else f=r[i];
        }
        if(ans && r[n-1]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
//0 -4 -5 2 3 0
