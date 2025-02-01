#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],cou=0;
        long long sum=0;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        for(int i=0;i<n;i++){
            sum+=r[i];
            if(r[i]==1) cou++;
        }
        if(sum-cou<n || n==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
