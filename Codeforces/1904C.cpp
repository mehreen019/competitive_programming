#include<bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int maxx=1e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;

    int tst=1;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        vector<int>r(n);
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        if(k>=3) cout<<0<<endl;
        else{
            int minn=inf;
            sort(r.begin(),r.end());
            if(k==1){
                for(int i=0;i<n-1;i++){
                    minn=min(min(abs(r[i+1]-r[i]), r[i]), minn);
                }
                minn=min(minn, r[n-1]);
                cout<<minn<<endl;
            }
            else{
                set<int> upd;
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        upd.insert(abs(r[i]-r[j]));
                        minn=min(abs(r[i]-r[j]), minn);
                    }
                }

                for(auto it:upd){
                    auto f= lower_bound(r.begin(), r.end(), it);
                    if(f==r.begin()){
                        minn=min(abs(it-(*f)), minn);
                    }
                    else if(f==r.end()){
                        f--;
                        minn=min(abs(it-(*f)), minn);
                    }
                    else{
                        minn=min(abs(it-(*f)), minn);
                        f--;
                        minn=min(abs(it-(*f)), minn);
                    }
                }
                cout<<minn<<endl;
            }
        }
    }
}
