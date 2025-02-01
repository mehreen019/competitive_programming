#include<bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second
using namespace std;

const int inf=1e18;

signed main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],mx=-1,next=0,mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        vector<pair<int, int>> vp;
        for(int i=0;i<n;i++){
            int cnt=1;
            while(r[i]==r[i+1] && i!=n-1){
                cnt++;
                i++;
            }
            mx=max(mx, cnt);
            mn=min(cnt,mn);
            vp.pb({r[i], cnt});
        }

        mx=(mx+mn)/2;
        bool e=1,pro=0;
        for(int i=0;i<vp.size();i++){
            if(mx==mn && vp[i].second!=1 && e){ mx--; pro=1;}

            for(int j=0;j<min(vp[i].second,mx);j++){
                cout<<vp[i].first<<" ";
            }
            vp[i].second-=mx;
            if(i+1==vp.size()){
                while(vp[i].second>0){
                    cout<<vp[i].first<<" ";
                    vp[i].second--;
                }
            }
            else{ vp[i+1].second+=max(vp[i].second, 0); }

            if(pro){ mx++; e=0; pro=0;}
        }
        cout<<endl;
    }
}
