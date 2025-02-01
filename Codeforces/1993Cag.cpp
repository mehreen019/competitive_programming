#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=2e5+5;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n+3]={0};
        bool ans=1;
        vector< vector<int> > div(k+10);
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        for(int i=0;i<n;i++){
            div[(r[i]%k)].pb(r[i]);
        }
        for(int i=0;i<(k+10);i++){
            for(int j=0;j<div[i].size();j++){
                for(int inn=j+1;inn<div[i].size();inn++){
                    if((div[i][inn]-div[i][j])%(k*2)){
                        //cout<<div[i][inn]<<" "<<div[i][j]<<endl;
                        ans=0; break;
                    }
                }
                if(!ans) break;
            }
            if(!ans) break;
        }
        if(!ans) cout<<-1<<endl;
        else{
            bool arrend=0;

            int j=0, cnt=0, anst=0, hi=(r[n-1]*2);
            vector<int> timee(hi+10, 0);
            for(int i=1;i<=hi;i++){
                if(timee[i]<0){
                    if(i+k<=hi)
                    timee[i+k]+=abs(timee[i]);
                }
                if(timee[i]>0){
                    if(i+k<=hi)
                    timee[i+k]-=abs(timee[i]);
                }

                if(!arrend && i==r[j]){
                    if(timee[i]<0){ ans=0; break; }

                    timee[i]++;
                    if(i+k<=hi){ timee[i+k]--;}
                    j++;
                    if(j==n) arrend=1;
                }
                cnt+=timee[i];
                if(cnt==n){ anst=i; break;}
            }
            if(ans && cnt==n){ cout<<anst<<endl; }
            else cout<<-1<<endl;
        }

    }
}
