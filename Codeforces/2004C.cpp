#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        int alice=0,bob=0;
        bool t=0;

        for(int i=n-1;i>=0;i--){
            if(!t){ alice+=r[i]; t=1; }
            else{
                t=0;
                if(r[i+1]-r[i]<=k){
                    int temp=r[i+1]-r[i];
                    r[i]+=temp;
                    k-=temp;
                    bob+=r[i];
                }
                else{
                    int temp=k;
                    r[i]+=temp;
                    k-=temp;
                    bob+=r[i];
                }
            }
        }
        int ans=max(alice-bob, 0LL);
        cout<<ans<<endl;
    }
}
