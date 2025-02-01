#include<bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
using namespace std;

const int maxx=1e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;

    int twos[25];
    twos[0]=1;
    for(int i=1;i<=20;i++){
        twos[i]=twos[i-1]*2;
    }

    while(tst--){
        int n;
        cin>>n;
        vector<int> perm;
        if(n%2==1){
            cout<<n<<endl;
            cout<<2<<" "<<3<<" "<<1<<" ";
            for(int i=4;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            int dig=log2(n);
            cout<<twos[dig+1]-1<<endl;
            if(twos[dig]==n){
                cout<<2<<" "<<3<<" "<<1<<" ";
                for(int i=4;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
            else{
                int match=twos[dig]-1;
                for(int i=1;i<n-1;i++){
                    if(i!=match) cout<<i<<" ";
                }
                cout<<n-1<<" "<<n<<" "<<match<<endl;
            }
        }
    }
}
