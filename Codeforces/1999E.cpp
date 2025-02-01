#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        int tn=n,ex=0, cnt=0,croot=0,temp=1,low=0;

        croot=(log(tn)/log(3));
        cnt+=((croot+1)*2);

        croot=(log(n+1) / log(3));
        temp=pow(3,croot);
        low=n+1;

        while(temp<=m){

            temp*=3;
            temp=min(temp,m+1);
            cnt+= ((temp-low)*(croot+1));

            low=temp;
            croot++;
            //cout<<temp<<" "<<low<<endl;
        }
        cout<<cnt<<endl;
    }
}
