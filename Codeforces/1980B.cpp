#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, f,k, fav=0;
        cin>>n>>f>>k;
        vector<pair<int,int> >  p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second=i;
            if(i==f-1) fav=p[i].first;
        }
        sort(p.begin(), p.end(), greater<pair<int,int> >());
        string ans="NO";
        for(int i=0;i<k;i++){
            //cout<<p[i].first<<" "<<p[i].second<<endl;
            if(p[i].second==f-1 || p[i].first==fav){
                int nw=p[i].first;
                if(i+1!=n && p[i+1].first==nw){ ans="MAYBE"; }
                else ans="YES";
            }
        }
        cout<<ans<<endl;
    }
}
