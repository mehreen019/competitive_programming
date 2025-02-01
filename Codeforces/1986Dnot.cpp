#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], minel=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>r[i];
            minel=min(minel, r[i]);
        }
        if(n==2){
            if(r[0]==0) cout<<r[1];
            else cout<<r[0]<<r[1]<<endl;
        }
        else if(n==3 && r[1]==0){
            cout<<max(r[0]*r[2], r[0]+r[2])<<endl;
        }
        else{
            int ze=0,idx=0,minn=INT_MAX;
            vector<int> one;
            for(int i=0;i<n-1;i++){
                if(r[i]==0){ ze=1; break; }
                else if(r[i]==minel){ one.push_back(i); }
            }
            if(ze) cout<<0<<endl;
            else{
                int fn=0;
                for(int i=0;i<n;i++){
                    if(r[i]==1){
                        if(ans==0) ans=1;
                    }
                    else ans+=r[i];
                }
                for(int i=0;i<n-1;i++){
                    if(r[i]==1 || r[i+1]==1){
                        int mid=r[i]*10 + r[i+1];
                        if(r[i]==1) fn=max(fn, ans-r[i+1]+mid);
                        else fn=max(fn, ans-r[i]+mid);
                    }
                    else{
                        int mid=r[i]*10 + r[i+1];
                        fn=max(fn, ans-r[i]-r[i+1]+mid);
                    }
                }
                cout<<fn<<endl;
            }
        }
    }
}
