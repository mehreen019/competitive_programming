#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int r[3], hand=5, d=0, rem=0, ans=1;
        for(int i=0;i<3;i++){
            cin>>r[i];
        }
        sort(r,r+3);
        int t1=r[2]-r[0], t2=r[2]-r[1];
        if(hand>=t1+t2){
            hand-=(t1+t2);
            r[0]=r[2];
            r[1]=r[2];
        }
        else{
            if(r[1]-r[0]<=hand){
                hand-=r[1]-r[0];
                r[0]=r[1];


                //cout<<hand<<endl;
                if(hand>0){
                d=hand/2; rem=hand%2;
                r[0]+=d; r[1]+=d;
                if(rem==1) r[0]++;
                }
                hand=0;
            }
            else{
                r[0]+=hand;
                hand=0;
            }
        }
        if(hand>0){
                d=hand/3; rem=hand%3;
                r[0]+=d; r[1]+=d; r[2]+=d;
                if(rem==1){ r[0]++;}
                else if(rem==2){ r[1]++; r[0]++; }
        }
        for(int i=0;i<3;i++){
            ans*=r[i];
        }
        cout<<ans<<endl;

    }
}
