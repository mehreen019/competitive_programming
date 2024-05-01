#include<bits/stdc++.h>
using namespace std;
const int MAXX=200005;
int dpa[MAXX], dpb[MAXX], dpc[MAXX];
int a[MAXX], b[MAXX], c[MAXX];

int main(void){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    dpa[1]=max(b[1],c[1]);
    dpb[1]=max(a[1],c[1]);
    dpc[1]=max(a[1],b[1]);
    for(int i=2;i<=n;i++){
        dpa[i]=max(dpb[i-1], dpc[i-1]) + a[i];
        dpb[i]=max(dpa[i-1], dpc[i-1]) + b[i];
        dpc[i]=max(dpb[i-1], dpa[i-1]) + c[i];
    }
    int ans=max(dpa[n], max(dpb[n], dpc[n]));
    cout<<ans<<endl;
}
