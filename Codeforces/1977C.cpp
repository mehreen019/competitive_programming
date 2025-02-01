#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int lcm(int a, int b){
    return ((a*b)/( __gcd(a,b) )) ;
}

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,x, one=0, ans=0;
        cin>>n;
        set<int> t;
        vector<int> r;
        map<int, int> mp,div;
        vector<pair<int, int> > pr;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==1){one++; continue; }
            t.insert(x);
            mp[x]++;
        }
        for(auto it:t){
            r.pb(it);
        }
        for(int i=0;i<r.size();i++){
            div[r[i]]+=mp[r[i]];
            //cout<<r[i]<<" "<<div[r[i]]<<endl;
            for(int j=i+1;j<r.size();j++){
                int k= lcm(r[i],r[j]);
                if(k==r[j]) div[k]+=(mp[r[i]]);
                else div[k]+=(mp[r[i]]+mp[r[j]]);
                //cout<<k<<" =lcm "<<div[k]<<endl;
            }

        }
        for(auto it: div){
            //cout<<it.first<<" "<<it.second<<endl;
            pr.pb({it.first, it.second});
        }
        for(int i=0;i<pr.size();i++){
            if(mp[pr[i].first]==0) ans=max(ans,pr[i].second);
            //else continue;

            cout<<pr[i].first<<" "<<pr[i].second<<endl;

            for(int j=i+1;j<pr.size();j++){
                if(mp[pr[j].first]==0)continue;


                int k= lcm(pr[i].first,pr[j].first);
                if(mp[k]==0){

                    int gcd= __gcd(pr[i].first,pr[j].first);

                    if(mp[gcd]==0){
                        pr[j].second+=pr[i].second;
                        ans=max(ans, pr[j].second);
                    }
                    else{
                        pr[j].second+=(pr[i].second-(mp[gcd]));
                        ans=max(ans, pr[j].second);
                    }
                }
            }
        }
        if(ans<=1){
            cout<<0<<endl;
        }
        else{
            cout<<ans+one<<endl;
        }
    }
}
