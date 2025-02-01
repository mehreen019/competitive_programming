#include<bits/stdc++.h>
#define int long long
#define pb push_back

using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        char r[2][n];
        int ans=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>r[i][j];
            }
        }
        for(int i=1;i<n-1;i++){
            if(r[0][i]=='.'){
                int cnt=0;
                if(r[0][i-1]=='x') cnt++;
                if(r[0][i+1]=='x') cnt++;
                if(r[1][i]=='x') cnt++;

                if(cnt==2){
                    if(r[1][i-1]=='.' && r[1][i+1]=='.') ans++;
                }
            }
        }
        for(int i=1;i<n-1;i++){
            if(r[1][i]=='.'){
                int cnt=0;
                if(r[1][i-1]=='x') cnt++;
                if(r[1][i+1]=='x') cnt++;
                if(r[0][i]=='x') cnt++;

                if(cnt==2){
                    if(r[0][i-1]=='.' && r[0][i+1]=='.') ans++;
                }
            }
        }
        cout<<ans<<endl;

    }
}
