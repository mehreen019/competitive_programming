#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long int tst,n;
    cin>>tst;
    while(tst--){
        int sum=1;
        cin>>n;
        for(int i=1; ; i++){
            sum+=pow(2,i);
            if(n%sum==0){ cout<<n/sum<<endl; break;}
        }
    }
}
