#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        /*int b=-1,inb=-1,cnt=n/10,inp=10,toplus=10,intotal=45,total=45,ans=0,mul=1;
        for(int i=0;i<cnt;i++){
            ans+=total;
            total+=toplus;
            if(b>0){ total-=b; b++;}
            toplus++;
            mul*=10;

            if(mul%100==0){
                intotal+=inp;
                inb++;
                intotal++;
                inp++;
                total=intotal;
                b=inb;
            }
            //cout<<i<<"th iteration: "<<ans<<" and minus is: "<<b<<endl;
        }
        while(mul!=n+1){
            int t=mul;
            int k=10;
            while(t!=mul){
                ans+=(t%k);
                t/=k;
            }
            mul++;
        }*/
        int dig=0,mul=n,ans=0,k=10;
        while(mul>0){
            mul/=10;
            dig++;
        }
        while(dig--){
            int t=n;
            ans+= (t/k)*45;
            k*=10;
        }

        //long long ans = 45*(9*n+1)*pow(10,(n-2));
        cout<<ans<<endl;
    }

}
