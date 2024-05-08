#include<bits/stdc++.h>
using namespace std;
const int MAXX=5005;
vector<vector<int> > piles(10);
int dp[1005][2005];

int solve(int k, int pile){
    if(dp[pile][k]!=-1) return dp[pile][k];
    if(k<=0 || pile==0) return 0;


    int p1=INT_MIN, p2=INT_MIN, n=piles[pile].size() ,am=0;
    int maxc=min(k,n);

    if(pile>1){
        p2=solve(k, pile-1);
    }

    for(int i=0;i<maxc;i++){
        cout<<k<<" "<<pile<<endl;
        am+=piles[pile][i];

        p1=max(solve(k-i-1,pile-1)+am, p1);
    }


    return dp[pile][k]=max(p1,p2);
}


int main(void){

    for(int i=0;i<1005;i++){
        for(int j=0;j<2005;j++){
            dp[i][j]=-1;
        }
    }

    int n,k,x,z;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>z;
        for(int j=0;j<z;j++){
            cin>>x;
            piles[i].push_back(x);
        }
    }

    int ans = solve(k,n);

    cout<<max(dp[n][k],0)<<endl;

    for(int i=1;i<=n;i++){
        for(int j=0;j<piles[i].size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
2 2
3
1 100 3
3
7 8 9
*/
