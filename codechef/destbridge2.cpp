#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, c, countt=0;
        cin>>n>>c;
        int costs[n];
        bool visited[n]={0};
        visited[0]=1;
        for(int i=0;i<n;i++){
            cin>>costs[i];
        }
        for(int i=0;i<n;i++){
            //if(!visited[i]) continue;
            for(int j=0;j<n;j++){
                //cout<<(costs[i]*costs[j])<<endl;
                if( (costs[i]*costs[j]) <= c){
                    c-= (costs[i]*costs[j]);
                    cout<<c<<endl;
                }
                else{
                    visited[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
                //cout<<visited[i]<<" ";
            if(visited[i]) countt++;
        }
        cout<<countt<<endl;

    }
}
