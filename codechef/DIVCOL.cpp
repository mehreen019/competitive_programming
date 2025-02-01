#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxx=2e5+5;
vector<vector<int> >divv(maxx);

void sieve(){
    for(int i=2;i<=maxx;i++){
        for(int j=i+i;j<=maxx;j+=i){
            divv[j].push_back(i);
        }
    }
}

int32_t main(void){
    int tst;
    cin>>tst;
    sieve();
    while(tst--){
        int n;
        cin>>n;
        int cur=2, r[n+1];
        r[1]=1;
        for(int i=2;i<=n;i++){
            if(divv[i].empty()){
                r[i]=cur;
            }
            else{
                if(r[divv[i].back()]==cur){
                    cur++;
                }
                r[i]=cur;
            }
        }
        if(n==1) cout<<1<<endl;
        else{
        cout<<cur<<endl;
        for(int i=1;i<=n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;
        }
    }
}
