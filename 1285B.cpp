#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ll tst;
    cin>>tst;
    while(tst--){
        ll n;
        cin>>n;
        ll r[n],sum=0,cur=0,drop=0,abel=0;
        int k=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
            if(r[i]<=0) k++;
        }
        if(k==0){ cout<<"YES"<<endl; }
        else if(k==n) cout<<"NO"<<endl;
        else{
            int lo=0, hi=n-1;
            for(int i=lo;i<hi;i++){
                if(r[i]<0){
                    if(cur+r[i]>0) cur+=r[i];
                    else cur=0;

                    abel=max(abel,cur);
                }
                else{
                    cur+=r[i];
                    abel=max(abel, cur);
                }
            }
            lo=1, hi=n,cur=0;
            for(int i=lo;i<hi;i++){
                if(r[i]<0){
                    if(cur+r[i]>0) cur+=r[i];
                    else cur=0;

                    abel=max(abel,cur);
                }
                else{
                    cur+=r[i];
                    abel=max(abel, cur);
                }
            }
            if(abel>=sum) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
/*
17
7
1 2 -4 12 3 -5 7
*/
