#include<bits/stdc++.h>
#define maxnum 1000000
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int m, min1=maxnum,min2=maxnum,ma=maxnum;
        string s;
        for(int i=0;i<n;i++){
            cin>>m>>s;
            if(s=="01") min1=min(min1,m);
            else if(s=="10") min2=min(min2,m);
            else if(s=="11") ma=min(ma,m);
        }
        int ans=min(min1+min2, ma);
        if(ans>=maxnum) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}
