#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
      cin>>n;
      map<int, int> mp;
      vector<vector<int>> cou;
      int x,m,ans,res=INT_MIN;
      for(int i=0;i<n;i++){
            cin>>m;
            vector<int> v;
            for(int j=0;j<m;j++){
                cin>>x;
                mp[x]++;
                v.push_back(x);
            }
            cou.push_back(v);
      }
      ans=mp.size();
      bool l=0;
      for(int i=0;i<n;i++){
        for(auto j=cou[i].begin();j!=cou[i].end();j++){
            if(mp[*j]==1){
                ans--;
            }
            cout<<ans<<" "<<mp[*j]<<" ";
        }
        if(ans!=mp.size())res=max(res,ans);
        ans=mp.size();
        cout<<endl;
      }
      cout<<res<<endl;
    }
}
