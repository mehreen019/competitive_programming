#include<bits/stdc++.h>
#define MOD 1000000000000000000
using namespace std;
int main(void){
    long long tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n>>m;
        __int128_t t=m,a,b=0,c,ans1, ans2,l,h,mid,ans;
        long long r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            t-=r[i]*r[i];
            b+=r[i];
        }
        b*=2; a=n; c=-t;
        __int128_t root= (b*b - (4*a*c));

        l=1,h=root;
        while(l<h){
            mid=(l+h)/2;
            if(mid*mid==root){ h=mid; break;}

            if(mid*mid>root) h=mid;
            else l=mid+1;
            cout<<(long long)(mid*mid)<<endl;
        }

        ans1= ( -b+mid )/ (2*a);
        ans2= ( -b-mid )/ (2*a);
        ans=(max(ans1,ans2))/2;
        cout<<(long long)ans<<endl;
        //cout<<c<<endl;
    }
}
