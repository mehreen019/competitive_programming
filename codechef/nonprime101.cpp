#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
bool primes[205]={0};

void sieve(){
    for(int i=2;i<205;i++){
        for(int j=i+i;j<205;j+=i){
            primes[j]=1;
        }
    }
}

int32_t main(void){
    int tst=1;
    cin>>tst;
    sieve();
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        map<int, vector<int>>mp;
        vector<pair<int, vector<int> > > un;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]].pb(i+1);
        }
        for(auto it:mp){
            un.pb({ it.first, it.second });
        }
        bool ans=0;
        /*for(int i=0;i<un.size();i++){
            cout<<un[i].first<<endl;
            for(int j=0;j<un[i].second.size();j++){
                cout<<un[i].second[j]<<" ";
            }
            cout<<endl;
        }*/

        for(int i=0;i<un.size();i++){
            if(un[i].second.size()>1){
                if(primes[(un[i].first)*2]){
                    ans=1;
                    cout<<un[i].second[0]<<" "<<un[i].second[1]<<endl;
                    break;
                }
            }

            for(int j=i+1;j<un.size();j++){
                if(primes[un[i].first+un[j].first]){
                    ans=1;
                    cout<<un[i].second[0]<<" "<<un[j].second[0]<<endl;
                    break;
                }
            }
            if(ans) break;
        }

        if(!ans) cout<<-1<<endl;
    }
}
