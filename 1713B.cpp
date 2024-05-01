#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        bool b=1; int x=1,y=1;
        cin>>n;
        int r[n],a[n];
        for(int i=0;i<n;i++){ cin>>r[i]; a[i]=r[i];}
        sort(a,a+n);
        /*if(a[0]==r[0]) ;
        else if(a[0]==r[1]) ;
        else if(a[0]==r[n-1]) ;
        else if(a[0]==r[n-2]) ;
        else b=0;

        if(a[n-1]==r[0]) ;
        else if(a[n-1]==r[1]) ;
        else if(a[n-1]==r[n-1]) ;
        else if(a[n-1]==r[n-2]) ;
        else b=0;
        */
        for(int i=1;i<n;i++){
            if(abs(r[i]-r[i-1])==1 || abs(r[i]-r[i+1])==1){ continue;}
            else {b=0; break;}
        }
        if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
