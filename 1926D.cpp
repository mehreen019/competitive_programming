#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        set<ll>r;
        int kk,ans=0;
        bool l=0;
        for(int i=0;i<n;i++){
            cin>>kk;
            r.insert(kk);
        }
        for(auto it=r.begin(); (it++) !=r.end(); ){
            for(auto itj=it; (itj++)!=r.end(); ){
                if((*it & *itj)==0 && (*it>=1000000000 || *itj>=1000000000)){ l=1; break;}
            }
            if(l) l=0;
            else ans++;
        }
        /*for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n-1;j++){
                if((r[i] & r[j])==0 && (r[i]>=1000000000 || r[j]>=1000000000)) l=1;
            }
            if(l) l=0;
            else ans++;
        }*/
        cout<<ans<<endl;
    }
}
