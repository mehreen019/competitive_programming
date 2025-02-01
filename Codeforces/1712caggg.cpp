#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x;
    cin>>tst;
    while(tst--){
        int sum=0;
        bool l=0,s=1;
        cin>>n;
        vector<int> a,r;
        for(int i=0;i<n;i++){ cin>>x; r.push_back(x); a.push_back(x);}
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){ if(a[i]!=r[i]){s=0; break;}}
        if(s) cout<<0<<endl;
        else {
            auto f=find(a.begin(),a.end(),r[n-1]);
            int fo=f-a.begin();
            if(a[fo+1]==a[fo] && fo!=(n-1)) l=1;
            for(int i=0;i<r.size();i++){
            for(int j=i+1;j<r.size();j++){
                if(r[i]==r[j]){ auto it=r.begin()+j; r.erase(it); j++; sum++;}
            }
        }
            if(l) cout<<n-sum-1<<endl;
            else cout<<n-sum<<endl;
        }
    }
}
