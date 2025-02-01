#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,k,w;
        cin>>n>>m>>k>>w;
        int arr[n+5][m+5], gor[w], ans=0;
        for(int i=0;i<w;i++){
            cin>>gor[i];
        }
        sort(gor, gor+w, greater<int>());

        priority_queue<int> pq;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                arr[i][j]=0;

                if(i<=(n+1)/2){

                    arr[i][j]+=(min(k, j) - max(0LL, k-(m-j+1)));
                    arr[i][j]*=(min(k, i)- max(0LL, k-(n-i+1)));

                //cout<<arr[i][j]<<" "<<i<<" "<<j<<endl;
                }
                else{
                    arr[i][j]=arr[n-i+1][m-j+1];
                }

                pq.push(arr[i][j]);

            }
            //cout<<endl;
        }

        for(int i=0;i<w;i++){
            int k=pq.top();
            pq.pop();
            //cout<<k<<endl;
            ans+=(k*gor[i]);
        }
        cout<<ans<<endl;
    }
}
