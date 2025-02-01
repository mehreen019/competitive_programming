#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n-1];
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            cin>>r[i];
        }
        ans.pb(r[0]);
        for(int i=0;i<n-2;i++){
            int t=(r[i] | r[i+1]);
            //cout<<t<<endl;
            ans.pb(t);
        }
        ans.pb(r[n-2]);
        bool f=1;
        for(int i=0;i<n-1;i++){
            if((ans[i] & ans[i+1])!=r[i]){
                f=0; break;
            }
        }
        if(!f) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}
