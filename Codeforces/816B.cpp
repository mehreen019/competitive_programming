#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k,q,a,b,mn=INT_MAX, mx=INT_MIN;
    cin>>n>>k>>q;
    int r[200001]={0};
    while(n--){
        cin>>a>>b;
        r[a]+=1;
        r[b+1]-=1;
        //mn=min(a,mn);
        //mx=max(b+1,mx);
    }
    for(int i=1;i<200000;i++){
        r[i+1]+=r[i];
        if(r[i]>=k) r[i]=1;
        else r[i]=0;
    }
    if(r[200000]>=k) r[200000]=1;
    else r[200000]=0;

    for(int i=1;i<=200000;i++){
        r[i]+=r[i-1];
    }
    /*for(int i=0;i<=200000;i++){
        cout<<r[i]<<" ";
    }*/
    int cou=0;
    while(q--){
        cin>>a>>b;
        cout<<r[b]-r[a-1]<<endl;
    }
}

//91-1 92-2 93-2 94-2 95-1 96-1 97-2 98-1 99-1
//91-0 92-1 93-1 94-1 95-0 96-0 97-1 98-0 99-0
