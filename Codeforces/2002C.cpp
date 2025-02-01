#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,xi,yi,xf,yf,xt,yt;
        cin>>n;
        vector<pair<int,int> >v(n+5);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        cin>>xi>>yi>>xf>>yf;
        int dis= ((xi-xf)*(xi-xf)) + ((yi-yf)*(yi-yf)),tdis=0;
        bool ans=1;
        for(int i=0;i<n;i++){
            xt=v[i].first; yt=v[i].second;
            tdis=((xt-xf)*(xt-xf)) + ((yt-yf)*(yt-yf));
            if(tdis<=dis){ ans=0; break; }
        }

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
