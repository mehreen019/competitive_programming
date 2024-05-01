#include<bits/stdc++.h>
using namespace std;

int fib(int n, int* f){
    if(f[n]!=null) return f[n];
    if(n==0 || n==1) return 1;
    else{
        int res=fib(n-1)+fib(n-2);
        fib[n]=result;
        return result;
    }
}

int main(void){
    int n;
    cin>>n;
    int f[n];
    int ans=fib(n, f);
    cout<<ans;
}
