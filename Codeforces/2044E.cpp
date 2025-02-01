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
        int t= ((l2/k)/k);
        while(t--){
            tk*=k;
        }
        for(int i=l1;i<=r1;i++){
            if(i*tk>r2) break;
            for(int j=tk;i*j<=r2;j*=k){
                cout<<i<<" "<<j<<endl;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
