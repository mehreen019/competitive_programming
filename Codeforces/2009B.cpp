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
        string r[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>r[i][j];
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<4;j++){
                if(r[i][j]=='#'){
                    cout<<j+1<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
}
