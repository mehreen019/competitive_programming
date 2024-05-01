#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],as=1,des=1;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(int i=1;i<n;i++){
            if(r[i-1]>r[i]) des++;
        }
        for(int i=1;i<n;i++){
            if(r[i-1]<r[i]) as++;
        }
        cout<<des<<endl;
    }
}
