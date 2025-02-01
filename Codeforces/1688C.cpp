#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
        int n;
        cin>>n;
        ll a[n],b[n],ans=LLONG_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            memset(b,0,sizeof(b));
            ll cou=0,temp;
            b[i]=0;
            for(int j=i+1;j<n;j++){
                if(a[j]<=b[j-1]){
                   temp=(b[j-1]/a[j])+1;
                   cou+= temp;
                   b[j]= a[j]*temp;
                }
                else{
                    cou+=1;
                    b[j]=a[j];
                }
            }
            for(int j=i-1;j>=0;j--){
                if((a[j]*(-1))>=b[j+1]){
                   temp=(b[j+1]/(a[j]*(-1)))+1;
                   cou+= temp;
                   b[j]= a[j]*temp*(-1);
                }
                else{
                    cou+=1;
                    b[j]=(a[j]*(-1));
                }
            }
            /*for(int k=0;k<n;k++){
                cout<<b[k]<<" ";
            }
            cout<<endl;*/
            ans=min(ans, cou);
        }
        cout<<ans<<endl;
}
