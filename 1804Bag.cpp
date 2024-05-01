#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,v,vw,pw;
    cin>>tst;
    while(tst--){
        cin>>n>>v>>vw>>pw;
        int r[n],cou=1,t,vv=0;
        for(int i=0;i<n;i++) cin>>r[i];
        t=pw+vw;
        int i=0;
        for(int j=0;j<n;j++){
            if(r[i]+t<r[j] || vv>=v) { vv=0;i=j;cou++;j--; }
            else vv++;
        }
        cout<<cou<<endl;
    }
}
