#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        if(n%2==0) cout<<-1<<endl;
        else{
        int t=(n+1)/2;
        for(int i=t;i>=1;i--){
            cout<<i<<" ";
        }
        for(int i=t+1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        }
    }
}
