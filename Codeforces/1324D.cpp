#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    long long rt,qt,sum;
    cin>>n;
    int r[n],q[n];

    for(int i=0;i<n;i++) cin>>r[i];
    for(int i=0;i<n;i++) cin>>q[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            rt=r[i]+r[j]; qt=q[i]+q[j];
            if(rt>qt) sum++;
        }
    }
    cout<<sum;
}
