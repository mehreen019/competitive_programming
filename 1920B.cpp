#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, sum=0, k, x, totsum=INT_MIN;
        cin>>n>>k>>x;
        int r[n], tempk=k, tempx=x,j, presum[n+1], beg;
        presum[0]=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
        }
        sort(r,r+n);
        for(int i=1;i<=n;i++){
            presum[i]=presum[i-1]+r[i-1];
        }
        for(int i=n-1;i>=n-k-1;i--){
            if(i<x) beg=0;
            else beg=presum[i+1-x];
            totsum=max(beg-(presum[i+1]-beg), totsum);
            //cout<<(presum[i+1]-beg)<<" current sum: "<<beg<<" op:"<<beg-presum[i+1]+beg<<" totsum:"<<totsum<<endl;
        }
        if(k==n) cout<<max(totsum, (int)0)<<endl;
        else cout<<totsum<<endl;
    }
}
//123456
//013610
