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
        string s;
        cin>>s;
        int pending=1, ans=0;
        s[0]='(';
        for(int i=1;i<n;i++){
            if(i%2){
                if(s[i]==')' && pending>0) pending--;
                continue;
            }
            //cout<<i<<" "<<pending<<endl;

            if(s[i-1]=='('){ s[i]=')'; }
            else{
                if(pending>0){
                    s[i]=')';
                    pending--;
                }
                else if(pending==0){
                    s[i]='(';
                    pending++;
                }
            }
        }

        stack<int>st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){ st.push(i+1); }
            else{
                ans+=( (i+1)- st.top());
                st.pop();
            }
        }
        cout<<ans<<endl;
    }
}
