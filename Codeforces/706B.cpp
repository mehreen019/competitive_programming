#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,m,q,s=0;
    cin>>n;
    int r[n];
    for(int i=0;i<n;i++) cin>>r[i];
    sort(r,r+n);
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>q;
        auto s=upper_bound(r,r+n,q)-r;
        cout<<s<<endl;
    }
}
