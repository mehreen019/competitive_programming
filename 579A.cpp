#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,cou,p,r,i,uu;
    cin>>n;
    for(i=1; ;i++){
        r=pow(2,i);
        if( r>n ){
            i--;
            r=pow(2,i);
            cou++;
            break;
        }
    }
    while(i!=1){
        n=n-r;

    }
}
