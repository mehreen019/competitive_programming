#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else{
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        if(n%2){
            int mid = (n/2)+1;
            for(int i=mid+1;i<=n;i++){
            cout<<i<<" ";
            }
            for(int i=1;i<=mid;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=(n/2)+1;i<=n;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=n/2;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        }
        }

    }
}
