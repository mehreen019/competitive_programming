#include<bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int r[3];
        cin>>r[0]>>r[1]>>r[2];
        sort(r,r+3);
        if(r[0]+r[1]+1 >= r[2]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
