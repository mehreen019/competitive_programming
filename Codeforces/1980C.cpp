#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,x;
        cin>>n;
        int a[n],b[n];
        map<int, int>d,o, exist;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        cin>>m;
        int sc[m];
        for(int i=0;i<m;i++){
            cin>>x;
            d[x]++;
            sc[i]=x;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){ o[b[i]]++; }
            exist[b[i]]++;
        }
        bool pend=0, ans=1;
        for(auto it:sc){
            if(o[it]==0 && exist[it]==0) pend=1;
            else if(o[it]>d[it]){ ans=0; break;}
            else pend=0;
            //cout<<it<<" "<<pend<<endl;
        }
        for(auto it:o){
            if(d[it.first]==0){ans=0; break;}
        }
        if(pend || !ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
