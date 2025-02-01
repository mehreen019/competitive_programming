#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int c=0,sum=0,mn=0,mx=0,x=-1,t;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){ cin>>r[i]; if(r[i]==0){x=i; c++; } }
        t=c;
        for(int i=x;i>=0;i--){
            if(r[i]!=0) { sum+=r[i]; c--; }
        }
        for(int i=x;i>=0;i--){
                mn=min(mx,r[i]);
                mx=max(mx,r[i]);
                //mn=sum;
                    //sum-=mn;
                    sum+=mx;
                    sum-=mn;
            cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }
}
