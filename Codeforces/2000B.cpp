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
        int r[n],x;
        for(int i=0;i<n;i++){
            cin>>x;
            r[i]=x-1;
        }
        vector<int> seat(n,0);
        seat[r[0]]++;
        bool ans=1;
        for(int i=1;i<n;i++){
            bool fl=0;
            //cout<<r[i]<<endl;
            if(r[i]!=n-1 && seat[r[i]+1]==1) fl=1;
            if(r[i]!=0 && seat[r[i]-1]==1) fl=1;

            if(!fl){ ans=0; break; }
            else seat[r[i]]++;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
