#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],  minn=INT_MAX;
        set<int> ss;
        map<int, int> mp, mp2;
        vector<pair<int,int>> pv;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
            mp2[r[i]]++;
            minn=min(minn, r[i]);
        }
        //sort(r,r+n);
        int ans=0, bob=n/2, cnt=0, alice=0;
        if(n%2==0) alice=n/2;
        else alice=(n/2)+1;

        for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
            int t=it->second;
            if(bob >= t){
                mp[it->first]=0;
                bob -= t;
                //cout<<bob<<endl;
            }
            else break;
        }

        for(auto it:mp){
            if(alice<=0) break;
            if(it.second>0){
                ans++; alice--;
            }
            else continue;
        }

        int ans2=0, pent=0;
        bool odd=1;

        for(auto it:mp2){
            if(pent>0 && it.second<=pent){
                pent-=it.second;
                mp2[it.first]=0;
            }
            else if(odd){
                ans2++;
                odd=0;
            }
            else if(it.second>1){ans2++; pent++;}
            else if(it.second==1) odd=1;
        }
        cout<<min(ans, ans2)<<endl;
    }
}
