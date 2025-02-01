#include<bits/stdc++.h>
using namespace std;

int dance(int s,int* s1, int b, int* b1){
    int cou=0,j=0;
    for(int i=0;i<s;i++){
        if(abs(s1[i]-b1[j])<=1){ j++; cou++;}
        else if(s1[i]-b1[j]>1) {j++; i--;}

        if(j>=b) break;
        //cout<<s1[i]<<" "<<b1[i]<<endl;
    }
    return cou;
}

int main(void){
    int n,m,ans=0;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    cin>>m;
    int g[m];
    for(int i=0;i<m;i++) cin>>g[i];
    sort(b,b+n);
    sort(g,g+m);
    if(n>m) ans=dance(m,g,n,b);
    else ans=dance(n,b,m,g);
    cout<<ans<<endl;
}
