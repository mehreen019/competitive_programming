#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        int f[n], h[n], ans=0,beg=0,res=INT_MIN,d=-1;
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        for(int i=0;i<n-1;i++){
            if(h[i]%h[i+1]==0){
                beg=i;
            while(h[i]%h[i+1]==0){
                while(ans+f[i]>k){
                    cout<<ans<<"1 ";
                    res=max(res,ans);
                    ans-=f[beg];
                    beg++;
                }
                //cout<<ans<<"2 ";
                ans+=f[i];
                i++;
                if(i==n-1) break;
            }
                ans+=f[i];
                res=max(res,ans);
                d=max(d,i-beg);
                ans=0;
            }
            else{ beg=i; //cout<<"id"<<i<<" ";
            }
        }
        if(ans+f[n-1]>k){
            while(ans+f[n-1]>k){
                    res=max(res,ans);
                    ans-=f[beg];
                    beg++;
                }
                ans+=f[n-1];
                d=max(d,n-1-beg);
        }
        res=max(res,ans);
        cout<<res<<" "<<d<<endl;
    }
}
