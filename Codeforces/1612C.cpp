#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int, int>
using namespace std;

const int maxx=2e5+10;
const int inf=1e18;

int32_t main(void){
    int tst=1;
    cin>>tst;
    while(tst--){
        int n,x,msg,rem;
        cin>>n>>x;
        int l=0, r=(2*n)-1;
        while(l<r){
            int mid=(l+r)/2;
            if(mid>n){
                rem=(2*n)-1-mid;
                msg=((n*(n+1))/2 + ((n-1)*n)/2 - (rem*(rem+1))/2 );
            }
            else msg=(mid*(mid+1))/2;

            //cout<<msg<<" "<<mid<<" "<<l<<" "<<r<<endl;
            if(msg==x){ l=mid; break;}

            if(msg>x){
                r=mid;
            }
            else l=mid+1;
        }


        cout<<l<<endl;
    }
}
