#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            (r[i]%2==0) ? ans++ : 0;
        }
        if(ans==n) cout<<"second"<<endl;
        else cout<<"first"<<endl;
    }
}
