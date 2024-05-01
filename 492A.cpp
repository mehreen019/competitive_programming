#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,k,sum=0;
    cin>>n;
    for(int i=1;sum<=n;i++){
        for(int j=1;j<=i;j++){
        sum+=j;
        }
        k=i-1;
    }
    cout<<k<<endl;
}
