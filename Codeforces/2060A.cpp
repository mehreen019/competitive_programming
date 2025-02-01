#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int r[5], cur=0, ans=0;
        cin>>r[0]>>r[1]>>r[3]>>r[4];
        if((2*r[1]+r[0])==r[3]){
                cur++; r[2]=r[1]+r[0];
                for(int i=2;i<4;i++){
                    if((r[i]+r[i-1])==r[i+1]){ cur++; }
                    else{ ans=max(ans, cur); }
                }
                ans=max(cur, ans);
        }
        else{
                r[2]=r[3]-r[1];
                for(int i=2;i<4;i++){
                    if((r[i]+r[i-1])==r[i+1]){ cur++; }
                    else{ ans=max(ans, cur); }
                }
                ans=max(cur, ans);

                cur=1;
                r[2]=r[0]+r[1];
                for(int i=2;i<4;i++){
                    if((r[i]+r[i-1])==r[i+1]){ cur++; }
                    else{ ans=max(ans, cur); }
                }
                ans=max(cur, ans);
        }


        cout<<ans<<endl;
    }
}
