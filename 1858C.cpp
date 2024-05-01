#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        int r[n+1],m=2,inm=m;
        for(int i=1;i<=n;i++){
            r[i]=i;
        }
        cout<<1<<" ";
        for(int i=0;m<=n;i++){
            inm=m;
            while(m<=n){
                if(r[m]!=0)
                {
                cout<<r[m]<<" ";
                r[m]=0;
                if(m+m>n) break;
                m+=m;
                }
                else m++;
            }
            m=inm+1;
        }
        cout<<endl;
    }
}
