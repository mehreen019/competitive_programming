#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=998244353;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){

    int n,k,d;
    cin>>n>>k>>d;
    int r[n], seq[k], mi=0, score=0, init=(d-1)/2, ans=0;

    for(int i=0;i<n;i++){
        cin>>r[i];
        if(r[i]==i+1) init++;
    }
    for(int i=0;i<k;i++){
        cin>>seq[i];
        mi=max(mi, seq[i]);
    }
    mi--;
    int beg=INT_MAX, ts;
    //cout<<init<<endl;
    for(int i=1;i<d && i<=2*n;i++){
        ts=0;
        for(int j=0;j<n;j++){
            if(j<seq[(i-1)%k]) r[j]++;

            if(r[j]==j+1){
                ts++;
            }
            //cout<<r[j]<<" ";
        }
        //cout<<endl;
        if(ts>score){ score=ts; ans=max(ans, score+ ((d-i-1)/2)); }
        //cout<<score<<" "<<ans<<endl;

        while(r[mi]>=mi+1 && mi>0){ mi--; }
        if(mi<=0) break;
    }
    //cout<<score<<" "<<rem<<endl;
    cout<<max(ans, init )<<endl;
    }
}
