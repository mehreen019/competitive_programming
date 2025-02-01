#include<bits/stdc++.h>
#define int long long
#define pb push_back
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
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        bool ok=0;
        int a,b;
        for(int i=0;i<n-1;i++){
            if(r[i]>r[i+1]){ a=r[i]; b=r[i+1]; }
            else{ a=r[i+1]; b=r[i]; }

            if(a<b+b){ ok=1; break; }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
