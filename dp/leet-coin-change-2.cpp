#include<bits/stdc++.h>
using namespace std;
const int MAXX=5005;
int val[305], dp[305][MAXX];

int solve(int k, int idx){
    if(dp[idx][k]!=-1){ return dp[idx][k];}
    else if(k==0) return 1;
    else if(idx==0 || k<0) return INT_MIN;

    int p1,p2,p=0;
    if(k-val[idx]>=0){

        p1=solve(k-val[idx], idx);
        if(p1!=INT_MIN) p+=p1;
    }
//cout<<k<<" "<<val[idx]<<" "<<idx<<" "<<p2<<endl;

    p2=solve(k,idx-1);
    if(p2!=INT_MIN) p+=p2;

    return dp[idx][k]=p;
}

int main(void){

    for(int i=0;i<305;i++){
        for(int j=0;j<MAXX;j++){
            dp[i][j]=-1;
        }
    }

    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }

    int ans = solve(k,n);

    cout<<max(dp[n][k],0)<<endl;

    /*for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
}
/*
3 5
1 2 5
*/
