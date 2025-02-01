#include<bits/stdc++.h>
#define pb push_back
#define pair<int, int> pii
using namespace std;

const int inf=1e18;

signed main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], beg=0,ans=0;
        stack<int> st;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
        }
        for(auto it:mp){
            st.push(it.first);
        }
        for(int i=0;i<n;i++){
            if(r[i]!=st.top()){
                beg=min(i, beg);
                mp[r[i]]--;
            }
            else{
                mp[r[i]]--;
                while( !st.empty() && mp[st.top()]==0){ st.pop(); }
                ans=max(i-beg, ans);
                beg=i+1;
            }
        }
        ans=max(ans, n-beg);
        cout<<ans<<endl;
    }
}
