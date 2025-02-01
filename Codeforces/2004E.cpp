#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
const int maxx=1e7+10;
int grundy[maxx];

void linear_sieve(){
    int num=1;
    memset(grundy, 0, sizeof(grundy));

    grundy[1]=num;
    for(int i=3;i<maxx;i+=2){
        if(grundy[i]==0){
            num++;
            for(int j=i;j<maxx;j+=(2*i)){
                if(grundy[j]==0) grundy[j]=num;
            }
        }
    }
}

int32_t main(void){
    int tst=1;
    cin>>tst;
    linear_sieve();
    while(tst--){
        int n;
        cin>>n;
        int r[n],num=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            num^=grundy[r[i]];
        }
        if(num) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
