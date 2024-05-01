#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        long long r[n],ans=0,cou=0; bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if(r[i]<0){
                l=1;
                while(i<n && l){
                    if(r[i]<=0){ l=1; ans+=abs(r[i]); i++;}
                    else l=0;
                }
                cou++;
            }
            //cout<<r[i]<<" ";
            if(i<n)ans+=abs(r[i]);
        }
        cout<<ans<<" "<<cou<<endl;

    }
}
