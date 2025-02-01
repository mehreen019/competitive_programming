#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n+1],cou=0,x;
        for(int i=1;i<=n;i++){
            cin>>x;
            r[x]=i;
        }
        for(int i=2;i<=n;i++){
            if(r[i]<r[i-1]) cou++;
        }
        cout<<cou<<endl;
    }
}
