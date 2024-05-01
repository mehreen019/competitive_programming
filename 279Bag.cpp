#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,t,j=0,sum=0,ans=0;
    cin>>n>>t;
    long long r[n];
    for(int i=0;i<n;i++) cin>>r[i];
    for(int i=0;i<n;i++){
        while( j<n && sum+r[j]<=t ){
            sum+=r[j++];
        }
        ans=max(ans,j-i);
        sum-=r[i];
    }
    cout<<ans<<endl;
}
