#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,turn;
        cin>>n;
        turn=15*n;
        vector<pair<int, int> >vp;
        int edges[n+3][n+3], st=2;

        /*for(int i=0;i<=n+2;i++){
            for(int j=0;j<=n+2;j++){
                edges[i][j]==0;
            }
        }*/

        while(turn--){
            cout<<"? 1 "<<st<<endl;
            cout.flush();

            int inode,mid=1;
            cin>>inode;
            if(inode==-1) return 0;

            while(inode!=mid && inode!=st){
                mid=inode;
                cout<<"? "<<mid<<" "<<st<<endl;
                cout.flush();

                cin>>inode;
                if(inode==-1) return 0;
            }

            //edges[mid][st]=1;
            vp.pb({mid, st});
            //cout<<mid<<" "<<st<<endl;
            if(st==n) break;
            else st++;
        }

        cout<<"! ";
        /*for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(edges[i][j]==1){
                    cout<<i<<" "<<j<<" ";
                }
            }
        }*/
        for(auto it:vp){
            cout<<it.first<<" "<<it.second<<" ";
        }
        cout<<endl;
    }
}
