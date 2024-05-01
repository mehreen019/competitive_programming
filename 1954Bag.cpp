#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<int>r(n);
        int cou=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>r[i];
            mp[r[i]]++;
        }
        if(mp.size()==1){ cout<<-1<<endl; }
        else{
            int ans=INT_MAX;
            for(int i=0;i<n;i++){
                if(r[i]==r[n-1]) cou++;
                else break;
            }
            ans=min(ans,cou); cou=0;
            //cout<<ans<<endl;
            for(int i=n-1;i>=0;i--){
                if(r[i]==r[0]) cou++;
                else break;
            }
            ans=min(ans,cou);
            cou=1;
            for(int i=1;i<n;i++){
                if(r[i]!=r[0]){ ans=min(ans,cou); cou=0; }
                else cou++;
            }
            ans=min(ans,cou);
            cout<<ans<<endl;
        }
    }
}
//
