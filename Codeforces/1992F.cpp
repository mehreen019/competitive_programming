#include<bits/stdc++.h>
#define int long long
const int maxx=10005;
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n], cnt=1, j=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(k%r[i]!=0 || r[i]==1 || r[i]>k) continue;

            int divv=k/r[i];
            if(mp[divv]==0){
                mp[divv]=0;
                map<int, int> sec;
                for(auto it:mp){
                    int t=it.first*r[i];
                    if((t)>k) break;
                    if(k%(t)==0){ sec[t]++; }
                }
                for(auto it:sec){
                    mp[it.first]+=it.second;
                }
                //cout<<r[i]<<" "<<k/r[i]<<endl;
            }
            else{
                cnt++;
                mp.clear();
            }
            mp[r[i]]++;
        }
        cout<<cnt<<endl;
    }
}
