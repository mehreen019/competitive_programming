#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],prev=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        int ans=0;
        map<int,int> diff;
        for(int i=1;i<n;i++){
            if(r[i]<r[i-1]){
                diff[r[i-1]-r[i]]++;
                r[i]=r[i-1];
            }
        }
        int sz=diff.size();
        //cout<<sz<<endl;
        for (auto it = diff.rbegin(); it != diff.rend(); ++it) {
            //cout<<it->first<<" "<<it->second<<endl;
            auto temp= ++it;
            it--;
            if(temp==diff.rend()){
                //cout<<"ok"<<endl;
                ans+=(it->second+1+prev)*(it->first);
                prev+=it->second;
            }
            else{
                sz--;
                //cout<<temp->first<<endl;
                ans+=(it->second+1+prev)*( it->first - temp->first);
                prev+=it->second;
            }
            //cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }
}
