#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],s=0,k;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        cout<<r[n-1]<<endl;
        //sort(r,r+n);
        /*for(int i=0;i<n-1;i++){
            s=r[i]^s;
            cout<<s<<" ";
        }
        cout<<s<<endl;
        for(int i=0;i<n;i++){
            k=s;
            k=k^r[i];
            if(k==r[i]){ break; }
        }
        //cout<<k<<endl;*/
    }
}
