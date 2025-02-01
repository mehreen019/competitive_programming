#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tst=1;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        int r[n+5][m+5], col=1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                r[i][j]=0;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i][j]==0){
                    r[i][j]=col;
                    if(i+k<n && r[i+k][j]==0) r[i+k][j]=col;
                    if(i-k>=0 && r[i-k][j]==0) r[i-k][j]=col;
                    if(j+k<m && r[i][j+k]==0) r[i][j+k]=col;
                    if(j-k>=0 && r[i][j-k]==0) r[i][j-k]=col;

                    col++;
                }
                else{
                    if(i+k<n && r[i+k][j]==0) r[i+k][j]=r[i][j];
                    if(i-k>=0 && r[i-k][j]==0) r[i-k][j]=r[i][j];
                    if(j+k<m && r[i][j+k]==0) r[i][j+k]=r[i][j];
                    if(j-k>=0 && r[i][j-k]==0) r[i][j-k]=r[i][j];
                }
            }
        }
        /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<col-1<<endl;
    }
}
