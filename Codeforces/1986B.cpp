#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int r[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>r[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int maxn=INT_MIN;
                if(i!=n-1){
                    maxn=max(maxn, r[i+1][j]);
                }
                if(i!=0){ maxn=max(maxn, r[i-1][j]); }
                if(j!=m-1){ maxn=max(maxn, r[i][j+1]); }
                if(j!=0){ maxn=max(maxn, r[i][j-1]); }
                if(r[i][j]>maxn){ r[i][j]=maxn; }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
