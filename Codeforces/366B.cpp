#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,k;
    cin>>n>>k;
    int r[n],d[k]={0};
    for(int i=0;i<n;i++){
        cin>>r[i];
        d[i%k]+=r[i];
    }
    auto it=min_element(d,d+k);
    cout<<distance(d, it)+1;
    //for(int i=0;i<k;i++) cout<<d[i]<<" ";
}
