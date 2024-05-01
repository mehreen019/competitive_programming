#include<bits/stdc++.h>
using namespace std;
void f(){
    int i=2;
    while(i<=1000){
        i*=i;
    }
    cout<<i;
}


int main(void){
    int j=1,b=3,n=100;
    while(j<100){
        f();
        j*=b;
    }
}

