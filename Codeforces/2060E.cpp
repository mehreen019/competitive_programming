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
        int n,m1,m2, j=0, cnt=0;
        cin>>n>>m1>>m2;
        vector<pii> g1(m1), g2(m2);
        for(int i=0;i<m1;i++){
            cin>>g1[i].first>>g1[i].second;
        }
        for(int i=0;i<m2;i++){
            cin>>g2[i].first>>g2[i].second;
        }

        sort(g1.begin(), g1.end());
        sort(g2.begin(), g2.end());

        for(int i=0;i<m1;i++){
            if(j==m2){ cnt+=(m1-i); break; }

            if(g1[i].first==g2[j].first && g1[i].second==g2[i].second){ j++; }
            else{
                if(g1[i].first==g2[j].first && g1[i].second>g2[i].second){ i--; j++; }
                else if(g1[i].first>g2[j].first){  i--; j++;  }
                cnt++;
            }
        }

        if(m1==0){ cnt+=m2; }

        cout<<cnt<<endl;
    }
}
