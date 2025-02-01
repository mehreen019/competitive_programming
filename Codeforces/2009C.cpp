#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int x,y,k,ox,oy;
        cin>>x>>y>>k;
        ox=x;oy=y;
        //cout<<ans<<endl;
        if(x==y){
            int ans= (x/k)+( (x%k)?1:0 ) + (y/k)+( (y%k)?1:0 );
            //ans--;
            cout<<ans<<endl;
        }
        else{
            if(y<x) swap(x,y);
            int ans= ((x/k)+( (x%k)?1:0 ))*2;
            int diff=y-x,mid;

            mid= ((diff/k)+( (diff%k)?1:0 ))*2;

            if(ox>oy) cout<<ans+(mid)-1<<endl;
            else cout<<ans+(mid)<<endl;
        }
    }
}
