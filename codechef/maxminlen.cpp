#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxx=2e5+5;
vector<int> num;
map<int, int>mp;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        for(auto it: mp){
            num.push_back(it.first);
        }
        int k=0,t=0, cnt=0, ans=0;
        for(int i=0;i<num.size();i++){
            cnt=0;
            //cout<<num[i]<<" "<<mp[num[i]]<<" "<<ans<<endl;
            for(int j=i+1;j<num.size();j++){
                //cout<<num[j]<<" "<<mp[num[j]]<<" "<<ans<<endl;
                if((num[j]-num[i])==1){cnt+=mp[num[j]];  continue;}
                else{
                    int need= (num[j]-num[i])-2, mid=1;
                    //cout<<num[j]<<" "<<need<<" "<<cnt<<endl;
                    if( need > cnt){ cnt+=mp[num[j]]; continue;}
                    else{
                        if(need!=0){ mid=cnt-need+1;}
                        ans+=(mp[num[i]]*mp[num[j]]*(mid));
                    }
                }
                cnt+=mp[num[j]];
            }
        }
        cout<<ans<<endl;

        num.clear();
        mp.clear();
    }
}
