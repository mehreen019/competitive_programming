#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,k;
        cin>>n>>m>>k;
        int left[n], right[m], cnt=0;
        for(int i=0;i<n;i++){
            cin>>left[i];
        }
        for(int j=0;j<m;j++){
            cin>>right[j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(left[i]+right[j]<=k){
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }
}
