#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin>>n>>m;
        char r[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>r[i][j];
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            int zero=0, one=0, q=0;
            for(int j=0;j<m;j++){
                if(r[j][i]=='0') zero++;
                else if(r[j][i]=='1') one++;
                else if(r[j][i]=='?') q++;
            }

            if(q>0){
                if(zero>=(m/2)){ one+=q; }
                else if(one>=(m/2)){ zero+=q; }
                else{
                    if(m%2==0) { zero=m/2; one=m/2; }
                    else{ zero=(m/2); one=(m-zero); }
                }

                ans+=(zero*one);
            }
            else{
                ans+=(zero*one);
            }
            //cout<<zero<<" "<<one<<endl;
        }
        cout<<ans<<endl;
    }
}
//00????1

