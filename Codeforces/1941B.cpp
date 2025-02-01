#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], high=INT_MIN, idx;
        for(int i=0;i<n;i++){
            cin>>r[i];
            high=max(high, r[i]);
            if(high==r[i]) idx=i;
        }
        if(idx!=0 && idx!=n-1 && (r[idx+1]==high || r[idx-1]==high)){ cout<<"YES"<<endl; }
        else cout<<"NO"<<endl;
    }
}
//
