#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        string s;
        cin>>n>>s;
        int r[n], minel=INT_MAX;
        for(int i=0;i<n;i++){
            r[i]=s[i]-48;
            minel=min(minel, r[i]);
        }
        if(n==2){
            if(r[0]==0) cout<<r[1]<<endl;
            else cout<<r[0]<<r[1]<<endl;
        }
        else if(n==3 && r[1]==0){
            cout<<min(r[0]*r[2], r[0]+r[2])<<endl;
        }
        else{
            int ze=0,idx=0,minn=INT_MAX,ans=0,fn=INT_MAX;
            for(int i=0;i<n;i++){
                if(r[i]==0){ ze=1; break; }
                if(r[i]!=1){
                    ans+=r[i];
                }
                else if(r[i]==1) idx=1;
            }
            if(ze) cout<<0<<endl;
            else{
                //cout<<ans<<endl;
                for(int i=0;i<n-1;i++){
                    if(r[i]==1 || r[i+1]==1){
                        int mid=r[i]*10 + r[i+1];
                        if(r[i]==1 && r[i+1]==1) fn=min(fn, ans+mid);
                        else if(r[i+1]==1) fn=min(fn, ans-r[i]+mid);
                        else if(r[i]==1) fn=min(fn, ans-r[i+1]+mid);

                        //cout<<fn<<endl;
                    }
                    else{
                        int mid=r[i]*10 + r[i+1];
                        //cout<<mid<<endl;
                        fn=min(fn, ans-r[i]-r[i+1]+mid);
                    }
                }
                cout<<fn<<endl;
            }
        }
    }
}
