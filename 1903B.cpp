#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n,k;
    cin>>tst;
    while(tst--){
        cin>>n>>k;
        cout<< (n|k) <<endl;
        cout<< ((n|k)^k) <<endl;
    }
}
