#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int inf=1e18;
int primes[maxx]={0}, maxnum[maxx]={0};

void sieve(){
    for(int i=1;i<maxx;i++){
        for(int j=i+i;j<maxx;j+=i){
            primes[j]=primes[i]+1;
        }
        maxnum[i]=max(primes[i], maxnum[i-1]);
    }
}

int32_t main(void){
    int tst=1;
    cin>>tst;
    sieve();
    while(tst--){
        int n,m;
        cin>>n>>m;
        int r[m];
        for(int i=0;i<m;i++){
            cin>>r[i];
        }
        if(maxnum[n]+1>m) cout<<-1<<endl;
        else{
            sort(r,r+m, greater<int>());
            for(int i=1;i<=n;i++){
                cout<<r[primes[i]]<<" ";
            }
            cout<<endl;
        }
    }
}
