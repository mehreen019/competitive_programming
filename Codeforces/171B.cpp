#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long int n,sum=1;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        sum+=12*i;
    }
    cout<<sum<<endl;
}
