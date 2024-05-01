#include<bits/stdc++.h>
using namespace std;

int q(int l,int mid,int r, int a[]){
    if(l==r) return l;

    int cou=0;
    printf("? %d ", mid);
    for(int i=l;i<=mid;i++){
        printf("%d ", i);
        cou+=a[i];
    }
    fflush(stdout);
    int ans;
    scanf("%d", &ans);
    if(ans>cou){
        q((mid+1)/2,mid,r,a);
        q(l,(mid+1)/2,r,a);
    }
    else q(mid+1,r,r,a);
}

int main(void){
    int tst,n,m;
    cin>>tst;
    while(tst--){
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++) cin>>a[i];
        int mid=(1+n+1)/2;
        int ans=q(1,mid,n,a);
        printf("! %d", ans);
        fflush(stdout);
    }
}
