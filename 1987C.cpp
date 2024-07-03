#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n],pre[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            pre[i]=r[i];
        }
        for(int i=n-2;i>=0;i--){
            //cout<<r[i]<<" "<<r[i+1]<<endl;
            if(pre[i]>pre[i+1]){
                pre[i]=pre[i];
            }
            else if(pre[i]==pre[i+1]){
                pre[i]= pre[i+1]+1;
            }
            else if(pre[i]<pre[i+1]){
                //cout<<"ok";
                pre[i]=pre[i+1]+1;
            }
        }
        cout<<pre[0]<<endl;
    }
}
