#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tst;
    cin>>tst;
    while(tst--){
        ll n,m,k;
        cin>>n>>m>>k;
        ll r[n],tk=k, prev=0,cou=0;
        bool done=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
        }
        for(auto it:mp){
            //cout<<it.first<<" "<<it.second<<endl;
            if(done) mp[it.first]=0;
            else if(tk-(m*it.second)>=0){
                mp[it.first]=(m*it.second);
                //cout<<it.first<<" "<<mp[it.first]<<endl;
                tk-=(m*it.second);
            }
            else{ mp[it.first]=tk; done=1;}
        }
        tk=k;
        for(int i=0;i<n;i++){
            if(mp[r[i]]!=0){
                if(mp[r[i]]>m){
                    cou+= ( (r[i]+prev)*min(tk,m) );
                    prev+=min(tk,m);
                    mp[r[i]]-=min(tk,m);
                    tk-=min(tk,m);
                }
                else{
                    cou+= ( (r[i]+prev)*mp[r[i]] );
                    prev+=mp[r[i]];
                    tk-=mp[r[i]];
                    mp[r[i]]=0;
                }
            }
            if(tk==0) break;
        }

        cout<<cou<<endl;
    }
}
//1 3
