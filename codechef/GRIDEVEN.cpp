#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int mod=1e9+7;
const int maxx=1e5+10;
const int inf=1e18;


int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<int> seq;
        int mid=(n+1)/2;
        for(int i=1;i<=n;i+=2){
            seq.pb(i);
        }
        for(int i=n;i>=1;i-=2){
            seq.pb(i);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<seq[(i+j)%n]<<" ";
            }
            cout<<endl;
        }
    }
}
