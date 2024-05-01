#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n];
        if(n%2){
        for(int i=0;i<n;i=i+2){
            r[i]=n-i;
        }
        for(int i=1;i<n;i=i+2){
            r[i]=i+1;
        }
        for(int i=0;i<n;i++) cout<<r[i]<<" ";
        cout<<endl;
        }
        else{
            for(int i=1;i<n;i=i+2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
    }
}
