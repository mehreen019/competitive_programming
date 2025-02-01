#include<bits/stdc++.h>
using namespace std;

int bins(int arr[],int l,int r,int x){
    if(r>=l){ int m=(l+r)/2;
    if(arr[m]==x) return m;
    else if(arr[m]>x) return bins(arr,l,m-1,x);
    else return bins(arr,m+1,r,x);
    }
    return l;
}

int main(void){
    int n,m;
    cin>>n;
    int a[n],r[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        r[i]=sum;
    }
    cin>>m;
    int w[m],x;
    for(int i=0;i<m;i++) cin>>w[i];
    int i=0;
    while(m--){
        x=bins(r,0,n-1,w[i]);
        cout<<x+1<<endl;
        i++;
    }
}
