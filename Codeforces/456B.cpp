#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,res=0,s;
    cin>>n;
    for(int i=1;i<=4;i++){s=pow(i,n); res+=s%5;}
    cout<<n;
}
