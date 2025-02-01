#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=1e5+5;
const int inf=1e18;
vector<vector<int> >divv(maxx);

void sieve(){

    for(int i=1;i<maxx;i++){
        for(int j=i;j<maxx;j+=i){
            divv[j].pb(i);
        }
    }
}

int32_t main(void){
    int tst;
    cin>>tst;
    sieve();
    while(tst--){
        int n,m;
        cin>>n>>m;
        int r[n],ans=inf, subs=0, start=0;
        vector<int> teams(m+5,0);
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);

        for(int i=0;i<n;i++){
            for(auto it: divv[r[i]]){
                if(it>m) break;

                if(teams[it]==0) subs++;
                teams[it]++;
                //cout<<teams[it]<<" ";
            }

            while(subs==m){
                ans=min(ans, r[i]-r[start]);
                for(auto it: divv[r[start]]){
                    if(it>m) break;

                    teams[it]--;
                    if(teams[it]==0) subs--;
                }
                start++;
            }
        }
        //cout<<"ok";
        if(ans<inf) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}
