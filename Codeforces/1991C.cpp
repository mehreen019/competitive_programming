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
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        if(n==1) cout<<1<<endl<<r[0]<<endl;
        else{
            sort(r, r+n);
            int diff= (r[1]-r[0])%2;
            bool f=1;
            for(int i=0;i<n-1;i++){
                if( ((r[i+1]-r[i])%2) != 0){ f=0; break; }
                //else if( i!=0 && (r[i]+r[i-1])==r[i+1]){ f=0; break; }
            }
            if(!f) cout<<-1<<endl;
            else{
                int l=r[0], h=r[n-1], mid;
                vector<int> ans;
                //cout<<"ok"<<endl;
                while(h!=0){
                    if(( ((l+h)%2) && l!=h) || ans.size()>=40){ f=0; break; }

                    mid=(l+h)/2;
                    l=r[n-1]; h=-1;
                    ans.pb(mid);
                    //cout<<mid<<endl;

                    for(int i=0;i<n;i++){
                        r[i]=abs(r[i]-mid);
                        l=min(l,r[i]);
                        h=max(h,r[i]);
                    }
                }

                if(!f) cout<<-1<<endl;
                else{
                    cout<<ans.size()<<endl;
                    for(int i=0;i<ans.size();i++){
                        cout<<ans[i]<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
}
