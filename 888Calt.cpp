#include<bits/stdc++.h>
using namespace std;
int main(void){
    int k=-1,x=-1,i,j,a=-1;
    string s,h;
    cin>>s;
    int n=s.size();
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(s[i]==s[j]){ x=1; break; }
        }
        if(x==1) { a=max(a,max(i,n-j)); break;}
    }
    if(x==1) cout<<a<<endl;
    else cout<<(n/2)+1<<endl;
}
