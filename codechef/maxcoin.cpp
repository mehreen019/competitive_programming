#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,x, cnt=0;
        cin>>n>>x;
        for(int i=1;i<=n-x;i++){
            cnt-=(1<<i);
        }
        for(int i=(n-x)+1;i<=n;i++){
            cnt+=(1<<i);
        }
        cout<<cnt<<endl;
    }
}
