#include<bits/stdc++.h>
using namespace std;

int j(int l,int r,int* a, int* t){
    if(l==r) return l;
    cout<<"? 1 "<<l<<endl;
    //printf("? %d\n", l);
    //fflush(stdout);
    int ans;
    cin>>ans;
    //scanf("%d", &ans);
    if(ans!=t[l]) return l;
    else return r;
}

int bs(int l,int r,int* a, int* t){
    if(l==r) return l;
    else if(l>r) return -1;

    int mid=(l+r+1)/2;
    cout<<"? "<<mid-l+1<<" ";
    //printf("? %d ", mid);
    for(int i=l;i<=mid;i++){
        cout<<i<<" ";
        //printf("%d ", i);
    }
    cout<<endl;
    //printf("\n");
    //fflush(stdout);
    int ans;
    cin>>ans;
    //scanf("%d", &ans);
   // printf("%d %d", ans, a[mid]);
    if(ans==a[mid]-a[l-1]) bs(mid+1, r, a,t);
    else{
        if(mid-l<=1) j(l,mid,a,t);
        else bs(l, mid,a,t);
    }

}

int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n+1],a[n+1],cou=0;
        a[0]=0;
        for(int i=1;i<=n;i++){
            cin>>r[i];
            cou+=r[i];
            a[i]=cou;
        }
        //for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        int l=bs(1,n,a, r);
        cout<<"! "<<l<<endl;
        //printf("! %d\n", l);
        //fflush(stdout);
    }
}
