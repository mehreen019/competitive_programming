#include<bits/stdc++.h>
using namespace std;

int fib(int n, int* f){
    if(f[n]!=NULL) return f[n];
    if(n==0 || n==1) return 1;
    else{
        int res=fib(n-1, f)+fib(n-2, f);
        f[n]=res;
        return res;
    }
}

int main(void){
    int n;
    cin>>n;
    int f[n];
    int ans=fib(n, f);
    cout<<ans;
}
