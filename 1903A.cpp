//1 2 5 4 3
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int r[n],cou=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(int i=1;i<n;i++){
            if(r[i]>=r[i-1]) cou++;
            else break;
        }
        if(k==1 && cou!=n-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
