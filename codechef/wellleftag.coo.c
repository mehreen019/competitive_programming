#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,h,k, dist=0, ans=0;
        cin>>n>>h>>k;
        for(int i=1;i<=min(n,h);i++){
            dist=(h-i);

            if(i>=h) dist=(i-h)*(-1);
            else{
                if(dist%(k-1)==0) dist/=(k-1);
                else{ dist= dist/(k-1); dist++; }
            }

            ans+=(i-dist);
        }
        if(n>=h){
            ans+=(n)*(n-h+1);
        }
        cout<<max(ans,0LL)<<endl;
    }
}
