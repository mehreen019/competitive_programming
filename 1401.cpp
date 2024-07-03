#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;

        for(int i=n;i>=1;i-=2){
            cout<<i<<" ";
        }
        int j=0;
        if(n%2) j=2;
        else j=1;

        for( ;j<n;j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//6 2 1 4 5 3
//5 2 1 3 4
//8 2 1 6 7 4 3 5
