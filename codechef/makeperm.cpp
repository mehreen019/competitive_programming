#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], extra=0;
        vector<int> pos(n+1,0);
        for(int i=0;i<n;i++){
            cin>>r[i];
            pos[r[i]]++;
        }
        bool ans=1;
        for(int i=1;i<=n;i++){
            if(pos[i]==0){
                if(extra>0){
                    extra--;
                }
                else { ans=0; break;}
            }
            else if(pos[i]>1) extra+=pos[i]-1;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
