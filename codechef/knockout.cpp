#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int r[16]={0};
        vector<pair<int, int> > vp(16);
        for(int i=0;i<16;i++){
            cin>>vp[i].first;
            vp[i].second=i;
        }
        sort(vp.begin(), vp.end());
        int cnt=1, numm=0;
        for(int i=0;i<16;i++){
            //cout<<vp[i].first<<" "<<vp[i].second<<endl;
            if((i+1)==(1<<cnt)){
                numm++;
                cnt++;
            }
            r[vp[i].second]=numm;
        }
        for(int i=0;i<16;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;
    }
}
