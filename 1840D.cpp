#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
        }
        sort(r,r+n);
        cout<<sum/3<<endl;
    }
}
