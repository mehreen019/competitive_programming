#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int c=0,sum=0,mn=0,mx=0,inmax,t,i,x; bool l=1;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){ cin>>r[i]; if(r[i]==0){ c++; x=i;} }
        t=c; i=0;
       /* while(t){
            if(r[i]!=0){sum+=r[i++]; t--;}
            else i++;
            if(i==x) break;
        }*/
        for(int i=0;i<n;i++){ if(r[i]!=0){sum+=r[i];} }
        cout<<sum<<endl;
        for(int i=0;i<n;i++){
            if(c==0){ l=0; }
            else if(r[i]!=0 && l) {
                inmax=mx;
                mx=max(mx,r[i]);
                mn=min(mx,r[i]);

                    if(r[i]==mx ){sum+=mx;
                    sum-=mn;
                    //c--;
                    }
                    else{
                       sum-=r[i];
                    }

            }
            //if( sum-mx )
            cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }
}
