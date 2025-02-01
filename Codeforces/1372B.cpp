#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        bool l=0;
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else{int j=3,i=-1;
            while(j<=sqrt(n)){
                i=n/j;
                if((n-i)%i==0){
                    cout<<i<<" "<<n-i<<endl;
                    l=1;
                    break;
                }
                j=j+2;
            }
            if(l==0) cout<<1<<" "<<n-1<<endl;
        }
    }

}
