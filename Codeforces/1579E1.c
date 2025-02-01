#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]==1)x=i;
        }
        for(int i=x;i>=0;i--){
            cout<<r[i]<<" ";
        }
        for(int i=x;i<n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;
    }
}
