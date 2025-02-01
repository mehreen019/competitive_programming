#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fs first
#define sc second
using namespace std;

const int inf=1e18;

signed main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int k,l1,r1,l2,r2, cnt=0,tk=1;
        cin>>k>>l1>>r1>>l2>>r2;
        for(int i=l1;i<=r1;i++){
            tk=k;

            if(i*tk>r2) break;
            if(i*tk<l2){
                while(i*tk<l2){
                    tk*=k;
                }
            }

            for(int j=tk;i*j<=r2;j*=k){
                //cout<<i<<" "<<j<<endl;
                cnt++;
            }
        }

        cout<<cnt+max(0LL, min(r1,r2)-max(l1,l2)+1)<<endl;
    }
}
