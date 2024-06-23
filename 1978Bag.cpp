#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        ll n, a,b, profit=0;
        cin>>n>>a>>b;
        ll tempn=n;
        ll tb= (b*(b+1))/2;
        ll ta= n*a;
        ll tn= ((b-n)*(b-n+1))/2;

        if((b-a)>=n){
            profit+=(tb-tn);
        }
        else{
            ll taa=(a*(a+1))/2;
            //cout<<taa<<" "<<tb-taa<<endl;
            if(b>a){
                profit+=((n-(b-a))*a);
                profit+=(tb-taa);
            }
            else profit+=(n*a);
        }
        cout<<profit<<endl;
    }
}
