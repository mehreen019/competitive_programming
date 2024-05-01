#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,x,y,x1=0,y1=0,j,sum=1,l1=0,l2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x>y) j=1;
        else j=0;
        for( ;j<=((x+y)-(l1+l2))+1;j++){
            if(j%2){
                if(x1<x){ x1++; //cout<<x1<<" "<<y1<<endl;
                        if(x1==y1) sum++; }
            }
            else{
                if(y1<y){ y1++; //cout<<x1<<" "<<y1<<endl;
                        if(x1==y1) sum++; }
            }
            if(x1==x && y1==y) break;
        }
        l1=x; l2=y;
    }
    cout<<sum;
}
