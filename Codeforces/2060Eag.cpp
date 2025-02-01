#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,m1,m2, j=0, cnt=0, num1,num2;
        cin>>n>>m1>>m2;
        num2=m2;
        vector<pii> g1(m1), g2(m2);
        map<pii, int> mp1, mp2;
        for(int i=0;i<m1;i++){
            cin>>g1[i].first>>g1[i].second;

            if(g1[i].first>g1[i].second) swap(g1[i].first, g1[i].second);
            mp1[g1[i]]++;
        }
        for(int i=0;i<m2;i++){
            cin>>g2[i].first>>g2[i].second;

            if(g2[i].first>g2[i].second) swap(g2[i].first, g2[i].second);
            mp2[g2[i]]++;
        }

        for(auto it: mp1){
            if(mp2[it.first]==it.second){ num2-=it.second; }
            else{
                cnt+=it.second;
            }
        }
        cnt+=num2;

        cout<<cnt<<endl;
    }
}
