#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        long long r[n],cou=0,ans=0,in=n;
        map<long long, long long> v;
        vector<long long> c(n+1, 0);
        for(int i=0;i<n;i++){
         cin>>r[i];
         if(r[i]<=n) v[r[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(v[i]==0) continue;
            int a=v[i];
            for(int j=i;j<=n;j+=i){
                //if(v[j]==0) continue;
                c[j]+=a;
                //cout<<j<<" ";
            }
        }
        sort(c.begin(),c.end());
        cout<<c[c.size()-1]<<endl;
    }
}
