#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,x;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],a[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            a[i]=r[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(r[i]==a[n-1]){x=i; break;}
        }
        for(int i=0;i<n;i++){
                if(i==x){cout<<a[n-1]-a[n-2]<<" ";}
            else cout<<r[i]-a[n-1]<<" ";
        }
        cout<<endl;
    }
}
