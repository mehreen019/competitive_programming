#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],sum=0,tsum=0;
        for(int i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];
        }
        int k=2,j;
        for(int i=0;i<n;i++){
            tsum=r[i];
            j=i+1;
            //cout<<tsum;
            while(j<n){
                for(j;tsum<sum/2 ;j++){
                tsum+=r[j];
                }
               //cout<<tsum<<'t'<<" "<<k;
                if(tsum==sum/2)break;
                else if(tsum>sum/2){
                    tsum=r[i];
                    j=i+k;
                    k++;
                }
            }
            if(tsum==sum/2){break;}
        }
        if(sum%2) cout<<"NO"<<endl;
        else if(tsum==sum/2)cout<<"YES"<<endl;
        else cout<<"NO"<<tsum<<endl;
    }
}
