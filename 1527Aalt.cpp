#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,s=0;
    cin>>tst;
    while(tst--){
        cin>>n;
        for(int i=1;i<sqrt(n)+2;i++){
            s=pow(2,i);
            if(s==n){ cout<<(s-1)<<endl; break;}
            else if(s>n){ s=(pow(2,i-1)-1); cout<<s<<endl; break;}
        }
    }
}
