#include<bits/stdc++.h>
using namespace std;
const int MAXX=1005;
set<int> dp[MAXX];
int len[MAXX];
char q[MAXX];

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=0;i<m;i++){
            cin>>len[i]>>q[i];
        }
        dp[0].insert(k);
        int i=0;
        while(i<m){
            if(q[i]=='0'){
                for(auto j:dp[i]){
                    dp[i+1].insert(((j+len[i])%n)+n*(j+len[i]==n));
                }
            }
            else if(q[i]=='1'){
                for(auto j:dp[i]){
                    dp[i+1].insert(((j-len[i])%n)+ n*(j-len[i]<=0));
                }
            }
            else{
                for(auto j:dp[i]){
                    dp[i+1].insert(((j+len[i])%n)+ n*((j+len[i])==n));
                    dp[i+1].insert(((j-len[i])%n)+ n*((j-len[i])<=0));
                }
            }
            i++;
        }
        cout<<dp[m].size()<<endl;
        for(auto j: dp[m]){
            cout<<j<<" ";
        }
        cout<<endl;
        for(int i=0;i<=m;i++){
            dp[i].clear();
            len[i]=0;
            q[i]='0';
        }
    }
}
