#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        int r[n];
        for(int i=n;i>=k;i--){
            cout<<i<<" ";
        }
        for(int i=m+1;i<k;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;

    }
}
