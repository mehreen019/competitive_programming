#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,v,vt,pt;
    cin>>tst;
    while(tst--){
        cin>>n>>v>>vt>>pt;
        int r[n],t,numv,x,cou=0; bool l=0;
        for(int i=0;i<n;i++) cin>>r[i];
        for(int i=0;i<n;i++){
            if(l==0){ r[i]+=pt; t=r[i]; l=1; x=i;}
            else if(r[i]==t) { continue; }
            else if(r[i]>t){ l=0; //i--;
                numv=v;
                while(r[x]<=r[i-1]+vt && numv>0){
                    x++; numv--;
                }
                cou++;
                i=x-1;
            }
            else { r[i]=t; }

            if(i==n-1 && r[x]==r[i]){
                cou++;
            }
        }
        //for(int i=0;i<n;i++) cout<<r[i]<<" ";
        cout<<cou;
        cout<<endl;
    }
}
