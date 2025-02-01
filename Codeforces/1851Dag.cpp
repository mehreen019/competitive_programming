#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n-1];
        vector<int> pos(n+1, 0), extra, missing;
        for(int i=0;i<n-1;i++){
            cin>>r[i];
        }
        if(r[0]<=n) pos[r[0]]++;
        else extra.push_back(r[0]);
        for(int i=1;i<n-1;i++){
            if(r[i]-r[i-1] <= n) pos[r[i]-r[i-1]]++;
            else extra.push_back(r[i]-r[i-1]);
        }

        for(int i=1;i<=n;i++){
            if(pos[i]==0) missing.push_back(i);
            else if(pos[i]>1) extra.push_back(i);
        }
        if(missing.size()==1 && extra.size()==0){
            cout<<"YES"<<endl;
        }
        else if(missing.size()==2 && extra.size()==1){
            if(missing[0]+missing[1]==extra[0]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
//1 2 3 4
//1 3 6 10
