#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int sum=0;
        cin>>n;
        int r[n],a[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        a[0]=r[0];
        sum+=a[0];
        for(int i=1;i<n;i++){
            a[i]=r[i]-sum;
            sum+=a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]<<endl;
        /*for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl; */
    }
}
