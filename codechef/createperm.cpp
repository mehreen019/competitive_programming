#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n]={0}, st=1;
        for(int i=0;i<n;i+=2){
            r[i]=st;
            st++;
        }
        for(int i=1;i<n;i+=2){
            r[i]=st;
            st++;
        }
        for(int i=0;i<n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;
    }
}
