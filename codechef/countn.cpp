#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n*2<<endl;
        }
        else{
            int sum=0,t;
            sum+=n*2;
            int multiples[n+1]={0};
            for(int i=3;i<=n;i+=2){
                if(multiples[i]==0){
                    t=n*i;
                    sum+=t;
                    for(int j=2;j*i<=n;j++){
                        multiples[j*i]=1;
                    }
                }
            }
            cout<<sum<<endl;
        }
    }
}
