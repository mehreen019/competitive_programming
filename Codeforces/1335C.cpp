#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],c=0,f,p;
        for(int i=0;i<n;i++) cin>>r[i];
        sort(r,r+n);
        p=r[n-1]+1;
        int a[p]={0};
        for(int i=0;i<n;i++){ a[r[i]]++; }
        sort(a,a+p);
        for(int i=0;i<p;i++){
                if(a[i]!=0) c++;
        }
        f=a[p-1];
        if(n==1) cout<<0<<endl;
        else{
                if(f==c) cout<<c-1<<endl;
                else cout<<min(f,c)<<endl;
        }
    }
}
