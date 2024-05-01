#include<bits/stdc++.h>
#define ll long long
#define tie ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(void){
    tie;
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll r[n],m[n],ans1=0,ans2=0;
        for(int i=0;i<n;i++) {cin>>r[i];ans2+=r[i];}
        for(int i=0;i<n;i++){ cin>>m[i];ans1+=m[i];}
        sort(r,r+n);
        sort(m,m+n);
        ans1+=(r[0]*n);
        ans2+=(m[0]*n);
        cout<<min(ans1, ans2)<<endl;
    }
}
