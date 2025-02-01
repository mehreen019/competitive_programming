#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n; float s=0;
    cin>>n;
    int r[n];
    bool l;
    if(n%2) l=1;
    else l=0;
    for(int i=0;i<n;i++) cin>>r[i];
    sort(r,r+n);
    for(int i=n-1;i>=0;i--){
        if((l && i%2==0) || (l==0 && i%2))  s+=(float)r[i]*(float)r[i];
        else if((l && i%2) || (l==0 && i%2==0)) s-=(float)r[i]*(float)r[i];
        //cout<<setprecision(10)<<s<<endl;
    }
    cout<<setprecision(10)<<s*3.1415926536<<endl;
}
