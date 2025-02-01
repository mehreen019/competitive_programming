#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,a,b;
        cin>>n>>m;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        vector<vector<int>> pre(n+1, vector<int>(3,0));
        for(int i=1;i<=n;i++){
            if(r[i-1]==1) pre[i][0]++;
            else if(r[i-1]==2) pre[i][1]++;
            else if(r[i-1]==3) pre[i][2]++;

            pre[i][0]+=pre[i-1][0];
            pre[i][1]+=pre[i-1][1];
            pre[i][2]+=pre[i-1][2];
        }
        //cout<<pre[0][0]<<" "<<pre[0][1]<<" "<<pre[0][2]<<endl;
        while(m--){
            cin>>a>>b;
            if((b-a)%2==0) cout<<"No"<<endl;
            else if(b-a==1){
                if(r[b-1]==r[a-1]) cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
            }
            else{
                bool ans=0;
                int mid=(b-a+1)/2;
                if(pre[b][0]-pre[a-1][0]==mid) {ans=1;}
                else if(pre[b][1]-pre[a-1][1]==mid) {ans=1;}
                else if(pre[b][2]-pre[a-1][2]==mid) {ans=1;}

                //cout<<pre[b][0]<<" "<<pre[b][1]<<" "<<pre[b][2]<<endl;
                //cout<<pre[a-1][0]<<" "<<pre[a-1][1]<<" "<<pre[a-1][2]<<endl;
                if(ans) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }

    }
}
