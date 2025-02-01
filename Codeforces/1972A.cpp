#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int a[n], b[n],countt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int j=0; bool c=0;
        for(int i=0;i<n;i++){
            while(a[i]>b[j]){
                j++;
                countt++;
                //cout<<i<<" "<<j<<endl;
                if(j>=n) break;
            }
            j++;
            if(j>=n) break;
        }
        cout<<countt<<endl;
    }
}
