#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        pair<int,int> vert[n];
        map<int,vector<int>> x,y;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>vert[i].first>>vert[i].second;
            x[vert[i].first].pb(vert[i].second);
            y[vert[i].second].pb(vert[i].first);
        }
        for(auto it:vert){
            if(y[it.second].size()>=2){
                if(x[it.first].size()>=2){
                    ans+=((y[it.second].size()-1)*(x[it.first].size()-1));
                }

                //cout<<it.first<<" "<<it.second<<" "<<ans<<endl;
            }
            /*else if(x[it.first]>=2){
                if(y[it.first]>0){
                    ans+=((x[it.first]-1)*y[it.first]);
                }
            }*/
        }

        for(auto it:y){
            for(int i=0;i<it.second.size();i++){
                for(int j=i+1;j<it.second.size();j++){
                    if((it.second[i]+it.second[j])%2==0){
                        if(x[(it.second[i]+it.second[j])/2].size()>0){
                            for(auto iit: x[(it.second[i]+it.second[j])/2]){
                                if(iit!=it.first && ((it.second[j]-it.second[i])/2==iit)){
                                    ans++; //cout<<it.second[i]<<" "<<it.second[j]<<endl;
                                }
                            }

                        }
                    }
                }
            }
        }

        cout<<ans<<endl;

    }
}
