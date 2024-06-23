#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int n, maxin=-1, maxnum=INT_MIN;
        cin>>n;
        int r[n];
        for(int i=0;i<n;i++){
            cin>>r[i];
            if(r[i]>=maxnum){
                maxnum=r[i];
                maxin=i;
            }
        }
        if(maxin==n-1){
            int nee=INT_MIN;
            for(int i=0;i<n-1;i++){
                nee=max(r[i],nee);
            }
            cout<<nee+maxnum<<endl;
        }
        else cout<<maxnum+r[n-1]<<endl;
    }
}
