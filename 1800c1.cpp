#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int c=0,sum=0,mn=0,mx=0,inmax; bool l=0;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){ cin>>r[i]; }
        for(int i=n-1;i>=0;i--){
            if(r[i]==0){ c++; l=1; }
            else if(r[i]!=0 && l) {
                inmax=mx;
                mn=min(mx,r[i]);
                mx=max(mx,r[i]);
                if(c){
                    //mn=sum;
                    //sum-=mn;

                    {
                    sum+=r[i];
                    c--;
                    }
                    if(r[i]==mx && inmax!=0){sum+=mx;
                    sum-=inmax; st=inmax; }
                }
                else{
                    if(r[i]==mx ){sum+=mx;
                    sum-=mn;}
                 }

            }
            //if( sum-mx )
            cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }
}
