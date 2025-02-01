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
        int m,a,b,c,ma,mb,t;
        cin>>m>>a>>b>>c;
        ma=min(a,m);
        mb=min(b,m);
        if(m-ma>0){ t=ma;  ma+=min(c,m-ma); c-=min(c,m-t);}
        if(m-mb>0){ t=mb; ma+=min(c,m-mb); c-=min(c,m-t); }
        cout<<ma+mb<<endl;
    }
}
