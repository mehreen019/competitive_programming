#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(void){
    ll tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        ll arr[n][n];
        ll r[n], st=LLONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(i!=j) st=min(arr[i][j], st);
            }
            r[i]=st;
            st=INT_MAX;
        }
        bool ans=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((r[i]|r[j])!=arr[i][j]){
                    if(r[i]<r[j]){
                        //cout<<r[i]<<endl;
                        r[i]= (arr[i][j])^r[j];

                    }
                    else{
                        r[j]= (arr[i][j])^r[i];
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            if((r[0]|r[i])!=arr[0][i]){ ans=0; break; }
        }
        if(n==1){
            cout<<"YES"<<endl<<1<<endl;
        }
        else if(ans){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
