#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
      cin>>n;
      map<int, int> mp;
      vector<vector<int>> cou;
      int x,m,ans,res=INT_MIN,lm=INT_MAX;
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
      for(auto k: mp){
        set<int> s;
        for(int i=0;i<n;i++){
            auto it=find(cou[i].begin(), cou[i].end(), k.first);
            if(it == cou[i].end()){
                for(auto j:cou[i]){
                    s.insert(j);
                }
            }
        }
        int ss=s.size();
        res=max(res, ss);
      }
      cout<<res<<endl;
    }
}
