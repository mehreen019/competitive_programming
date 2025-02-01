#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        int r[n],cou=0,ans=0,t=0;
        stack<int> pq;
        pq.push(-1);
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(s[i]=='1') cou++;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0') pq.push(r[i]);
            else{
                t=max(pq.top(),r[i]);
                if(t==pq.top()){
                    ans+=pq.top();
                    pq.pop();
                    pq.push(r[i]);
                }
                else ans+=t;
            }
           // cout<<pq.top()<<" ";
        }
        cout<<ans<<endl;

    }
}
