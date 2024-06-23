#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int r[3], dist=0;
        for(int i=0;i<3;i++){
            cin>>r[i];
        }
        sort(r,r+3);
        cout<<(r[1]-r[0]) + (r[2]-r[1])<<endl;
    }
}
