#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int r[n+1],a[k+1]={0},cou=0,in=0,occ[n]={0};
        vector<pair<int ,int>> v;
        for(int i=1;i<=n;i++){
            cin>>r[i];
            //a[r[i]]++;
        }
        //sort(a,a+k+1);
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n;j++){
                if(r[j]==i) {
                    //inicou=cou;
                    cou=max(cou, j-in-1);
                    occ[j-in-1]++;
                    in=j;
                   // cout<<cou<<" ";
                }
                if(j==n && j-in!=0){
                    cou=max(cou, j-in);
                    occ[j-in]++;
                   // cout<<cou<<" ";
                }
            }
            v.push_back(make_pair(cou, occ[cou]));
            cou=0; fill_n(occ,n,0); in=0;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}
