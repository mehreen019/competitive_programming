#include<bits/stdc++.h>
using namespace std;
int main(void){
    //int tst;
    //cin>>tst;
    //while(tst--){
    int n,t,sum=0,x=-1,y=-1;
    cin>>n>>t;
    int r[n];
    for(int i=0;i<n;i++){ cin>>r[i]; sum+=r[i];}
    int i=0,j=n-1;
    while(i<=j){
        if(sum>t){
            int k=sum;
            if(sum-r[i]<=t){ x=i+1;y=j;break; }
            else if(sum-r[j]<=t){ x=i;y=j-1;break; }
            else{
            sum-=min(r[i],r[j]);
            if(k-sum==r[i]) i++;
            else if(k-sum==r[j]) j--;
            }
        }
        else if(sum<=t) { x=i;y=j;break; }
        //cout<<i<<j<<" ";
    }
    cout<<y-x+1<<endl;
//}
}
