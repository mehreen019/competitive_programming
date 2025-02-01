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
        if(n>2) cout<<"NO"<<endl;
        else{
            sort(r,r+n);

            if(r[1]-r[0]<=1){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
}
