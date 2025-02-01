#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=2e5+5;
bool prime[maxx]={1};

void sieve(){
    for(int i=2;i<maxx;i++){
        for(int j=i+i;j<maxx;j+=i){
            prime[j]=0;
        }
    }
}

int32_t main(void){
    int tst;
    cin>>tst;
    sieve();
    while(tst--){
        int n, ls=1, col=1, maxcol=1,on=2;
        cin>>n;
        vector<int> ans;
        ans.pb(1);
        for(int i=2;i<=n;i++){
            if((1LL >> ls)==i){
                if(prime[(i^(i-1))]==0){ on=0; col=1;}
                ls++;
            }
            on++;
            if(on>2){ on=1; col++; }
            ans.pb(col);
            maxcol=max(maxcol, col);
        }
        cout<<maxcol<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
