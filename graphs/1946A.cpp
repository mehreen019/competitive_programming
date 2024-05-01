#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        sort(r,r+n);
        int mid= n/2, cnt=0;
        if(n%2==0) mid--;
        r[mid]++; cnt=1;
        for(int i=mid+1;i<n;i++){
            if(r[i]<r[i-1]){ cnt++; r[i]++;}
            else break;
        }
        cout<<cnt<<endl;

    }
}
//4 5 5 5 5
