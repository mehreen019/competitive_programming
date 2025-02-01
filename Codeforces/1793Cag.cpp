#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int d[n];
        int t,x=1,y=n,p=-1,q=-1,i=0,j=n-1; int l=0,m=0;
        for(int i=0;i<n;i++){ cin>>d[i]; }
        while(1){
            if(d[i]==x){ x++; m=1; i++;}
            else if(d[i]==y){ y--; m=1; i++;}

            if(d[j]==x){ x++; l=1; j--;}
            else if(d[j]==y){ y--; l=1; j--;}

            if(l==0 && m==0) break;
            else{ l=0; m=0; }
            if(i>j) break;
        }
        if(i>j) cout<<-1;
        else cout<<i+1<<" "<<j+1;
        cout<<endl;
    }
}
