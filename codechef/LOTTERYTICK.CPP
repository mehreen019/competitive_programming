#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int mod=1e9+7;
const int maxx=1e5+10;
const int inf=1e18;


int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], num=0, up=1000000,low=0;
        bool l=0,u=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        num=r[0];
        sort(r,r+n);
        for(int i=0;i<n;i++){
            if(r[i]==num){
                if(i!=0){ l=1; low=r[i-1]; }
                if(i!=n-1){ u=1; up=r[i+1]; }
            }
        }
        int ans=0;
        if(l) ans+=(num-low)/2;
        else ans+=(num-1);

        if(u)ans+=(up-num)/2;
        else ans+=(up-num);

        cout<<ans+1<<endl;
    }
}
