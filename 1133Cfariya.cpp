#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
        cin>>n;
        int r[n],ans=0,cnt=0,x=LONG_MAX; bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        int j=1;
        for(int i=0;i<n;i++){
            while(r[j]-r[i]<=5 && j<n) j++;
            ans=max(ans,j-i);
        }
        cout<<ans;
}
