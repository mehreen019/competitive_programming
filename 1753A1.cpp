#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        int sum=0,k=1;
        cin>>n;
        int r[n];
        vector <int>a;
       // a[0]=1;
       a.push_back(1);
        for(int i=0;i<n;i++){
            cin>>r[i];
            if((i+1)%2){sum+=r[i]; }
            else {sum-=r[i];}
            if(sum==0){
                //a[k]=i+1;
                //a[k+1]=i+2;
                //k+=2;
                a.push_back(i+1);
                a.push_back(i+2);
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i] ;
        }
        cout<<sum<<endl;
    }
}
