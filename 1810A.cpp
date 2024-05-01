#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n]; bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if(r[i]<=i+1) {l=1; break;}
        }
        if(l) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
