#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], prefix[n+1], suffix[n+1];
        prefix[0]=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            prefix[i+1]=r[i]+prefix[i];
        }
        suffix[n]=0;
        for(int i=n-1;i>=0;i--){
            suffix[i]=suffix[i+1]+r[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            //cout<<prefix[i]<<" "<<suffix[i+1]<<endl;
            if( r[i]==0 && abs(prefix[i]-suffix[i+1])<=1){
                if(prefix[i]==suffix[i+1]) cnt+=2;
                else cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
}
