#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int r[m], cnt=0;
        for(int i=0;i<m;i++){
            cin>>r[i];
            if(r[i]>1) cnt+=(r[i]-1);
        }
        //cout<<cnt<<endl;
        sort(r,r+m);
        cnt-=(r[m-1]-1);
        for(int i=0;i<m-1;i++){
            cnt+=r[i];
        }
        cout<<cnt<<endl;
    }
}
