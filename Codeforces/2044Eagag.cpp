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
        for(double i=1;i<=r2;i*=k){
            int tpl=ceil(l2/i), tpr=floor(r2/i);

            cnt+=max(0LL, min(r1,tpr)-max(l1,tpl)+1);
            //cout<<tpl<<" "<<tpr<<" "<<l1<<" "<<r1<<" "<<i<<" "<<cnt<<endl;
        }
        cout<<cnt<<endl;
    }
}
