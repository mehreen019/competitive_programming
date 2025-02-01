#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,r,k=0,ans=LLONG_MAX;
        cin>>n>>m>>r;
        if(n<m) swap(n,m);
        int logg=log2(n);

        for(int i=logg;i>=0;i--){
            int t=(1LL << i);
            if((t&n) && (t&m)==0){
                int temp=(k|t);
                if(temp<=r && (temp^n)>(temp^m) ){
                    k=temp;
                    ans=min(ans, abs((n^k) - (m^k)));
                }
            }
        }
        ans=min(ans, n-m);
        cout<<ans<<endl;
    }
}
