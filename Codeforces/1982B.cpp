#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD= 1e9+7;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k< y-(x%y)){
            cout<<x+k<<endl;
        }
        else{
            k-= y-(x%y);
            x+= y-(x%y);

            while(x!=1){
                while(x%y==0){
                    x/=y;
                }
                //cout<<x<<" "<<k<<endl;
                if(k==0 || x==1) break;
                if(k< y-(x%y)){ x+=k; k=0; break;}
                else{
                    k-= y-(x%y);
                    x+= y-(x%y);
                }
            }
            //cout<<x<<" "<<k<<endl;
            if(k==0) cout<<x<<endl;
            else{
                x+=(k%(y-x));
                cout<<x<<endl;
            }
        }

    }
}
