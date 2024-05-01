#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int t=0,mid=1,inst=n,ans=0;
        for(int i=1;i<=n;i++){
            int st=n,maxx=INT_MIN,beg=1,t=0;
            for(int i=1;i<mid;i++){
                t+=(beg*i);
                maxx=max(maxx, beg*i);
                beg++;
            }
            for(int i=mid;i<=n;i++){
                t+=(st*i);
                maxx=max(maxx, st*i);
                st--;
            }
            //cout<<maxx<<endl;
            ans=max(ans, (t-maxx));
            mid++;
        }
        cout<<ans<<endl;
    }
}
