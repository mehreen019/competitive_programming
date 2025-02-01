#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        int r[n],high=0,low=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            high=max(high, r[i]);
        }
        sort(r,r+n);
        int prev=1, extra=0,lid=0, add=0;
        low=r[0];
        for(int i=0;i<n-1;i++){
            if(r[i]<r[i+1]){
                if(k<(r[i+1]-r[i])*prev){
                        low=r[i]+(k/prev);
                        extra=k%prev;
                        lid=i;
                        k=0;
                        break;
                }
                else{
                    k-= (r[i+1]-r[i])*prev;
                    r[i]+= r[i+1]-r[i];
                    prev++;
                    //cout<<r[i]<<" "<<k<<" "<<prev<<endl;
                    low=r[i]; lid=i;
                    if(k<=0){ break; }
                }
            }
            else prev++;
        }
        if(k>0){
            low+=(k/n);
            add+=(k%n);
            //cout<<"extra had remained!"<<endl;
        }
        else{
            for(int i=lid+1;i<n;i++){
                if(r[i]==low) continue;
                if(r[i]>low) add++;
            }
            add+=extra;
            //cout<<"no extra coins remained"<<endl;
        }
        //cout<<low<<" "<<prev<<" "<<add<<endl;
        cout<<(low*n)-(n-1)+min(add,n-1)<<endl;
    }
}
