#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        char r[2][n];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>r[i][j];
            }
        }
        bool ans=1;
        for(int i=0;i<n;i=i+2){
            if(r[1][i]=='<' && r[0][i+1]=='<'){ ans=0; break; }
        }
        if(ans)
        {
            for(int i=1;i<n-1;i=i+2){
                if(r[0][i]=='<' && r[1][i+1]=='<'){ ans=0; break; }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
