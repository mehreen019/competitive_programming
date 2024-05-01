#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,tst;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n*(n-1)];
        int in[n],k=0,cou=n-1,x;
        bool l=0;
        for(int i=0;i<n*(n-1);i++){
            cin>>r[i];
            if(i%(n-1)==0){in[k]=r[i]; k++;}
        }
        sort(in,in+n);
        if(in[0]==in[1]){ cout<<in[0]<<" "; x=in[0];}
        else if(in[n-1]==in[n-2]){ cout<<in[n-1]<<" "; x=in[n-1]; }

        for(int i=0;i<n*(n-1);i=i+(n-1)){
            if(r[i]!=x){
                l=1;
                int j=i;
                while(cou--){
                    cout<<r[j]<<" ";
                    j++;
                }
            }
            //else{i=i+(n-1);}
            //cout<<r[i];
           // if(l) break;
        }
        cout<<endl;
    }
}
