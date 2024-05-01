#include<bits/stdc++.h>
#define tie ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int main(void){
    tie;
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n],m[n+1],a0=0,a1=0,q;
        string s;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        cin>>s;
        m[0]=0;
        for(int i=0;i<n;i++){
            m[i+1]=m[i]^r[i];
            if(s[i]=='0') a0^=r[i];
            else a1^=r[i];
        }
        cin>>q;
        int x,l,h;
        while(q--){
            cin>>x;
            if(x==1){
                cin>>l>>h;
                a0^=m[l-1]^m[h];
                a1^=m[l-1]^m[h];
            }
            else if(x==2){
                cin>>l;
                if(l==0) cout<<a0<<" ";
                else cout<<a1<<" ";
            }
        }
        cout<<endl;
    }
}
