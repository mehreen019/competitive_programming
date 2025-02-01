#include<bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;
int32_t main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(int i=0;i<n;i++){
            if(r[i]==n) cout<<1<<" ";
            else cout<<r[i]+1<<" ";
        }
        cout<<endl;
    }
}
