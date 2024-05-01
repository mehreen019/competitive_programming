#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        bool l=0;
        string s;
        cin>>n;
        int r[n][n];
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<n;j++){
                if(s[j]=='0') r[i][j]=0;
                else r[i][j]=1;
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(r[j][i]==1 && r[j][i+1]==0 && r[j+1][i]==0){ l=1; break; }
                if(r[i][j]==1 && r[i+1][j]==0 && r[i][j+1]==0){ l=1; break; }
            }
            if(l) break;
        }
        if(l) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
