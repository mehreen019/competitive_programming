#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<int> ans;
        int hbit = (log2(n));
        for(int i=hbit;i>=0;i--){
            if(n& (1LL <<i)){
                if((n & ~(1LL <<i))>0)
                 ans.push_back((n & ~(1LL <<i)));
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
