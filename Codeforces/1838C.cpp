#include<bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int maxx=2e3+10;
const int mod=1e9+7;
const int inf=1e18;
vector<bool>primes(maxx, 1);

void sieve(){
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i<maxx;i++){
        for(int j=i+i;j<maxx;j+=i){
            primes[j]=0;
        }
    }
}

int32_t main(void){
    fastio;
    sieve();
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>grid(n, vector<int>(m));
        int num=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=num;
                num++;
            }
        }

        if(primes[m]){
            for(int i=1;i<n;i+=2){
                for(int j=0;j<m;j++){
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }

            for(int i=0;i<n;i+=2){
                for(int j=0;j<m;j++){
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
