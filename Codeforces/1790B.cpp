#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,s,r;
    cin>>tst;
    while(tst--){
        cin>>n>>s>>r;
        int sum=0;
        cout<<(s-r)<<" ";
        int arr[n-1];
        for(int i=0;i<n-1;i++){
            arr[i]=r/(n-1);
            sum+=arr[i];
        }
        int j=0;
        while(sum<r){
            arr[j]++;
            sum++;
            j++;
        }
        for(int i=0;i<n-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
