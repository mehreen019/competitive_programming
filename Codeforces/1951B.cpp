#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        ll n,cou=0,cou1=0,k,idx;
        bool f=0;
        cin>>n>>k;
        ll r[n]; idx=k;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        idx--; k--;
        ll cow=r[idx];
        bool pass=0;
        for(int i=0;i<idx;i++){
            if(r[i]>cow){
                idx=i; break;
            }
        }
        if(idx!=0) cou++;
        for(int i=idx+1;i<n;i++){
            if(r[i]<cow){
                //cout<<r[i]<<" ";
                cou++;
            }
            else break;
        }
        for(int i=0;i<k;i++){
            if(r[i]<cow) cou1++;
            else{ cou1--; pass=1; break;}
        }
        if(!pass){
            for(int i=k+1;i<n;i++){
                if(r[i]<cow) cou1++;
                else{ break;}
            }
        }

        //cout<<cou<<" "<<cou1<<endl;
        cout<<max(cou,cou1)<<endl;
    }
}
