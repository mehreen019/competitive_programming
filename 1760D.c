#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int in=0,dec=0,mid=0, eq=0;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=1;i<n;i++){
            if(r[i]>=r[i-1]) in++;
            if(r[i]<=r[i-1]) dec++;
            if(r[i]<r[i-1] && r[i]<r[i+1] && i<n-1) mid++;
            if(r[i]==r[i-1]) eq++;
            }
        if((in==n || dec==n || mid==1) && eq!=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
