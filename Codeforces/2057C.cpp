#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define pii pair<int,int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;

const int maxx=2e5+10;
const int mod=1e9+7;
const int inf=1e18;

int32_t main(void){
    fastio;
    int tst=1;
    cin>>tst;
    while(tst--){
        int l,r,a,b,c;
        cin>>l>>r;
        int hl=-1,hr=-1,range,temp;
        range=log2(r);
        for(int i=0;i<30;i++){
            temp=(1LL <<i);
            //cout<<temp<<endl;
            //if(temp&l) hl=i;
            if((temp&r) && (temp&l)==0) hr=i;
        }
        for(int i=0;i<=hr;i++){
            temp=(1LL <<i);
            //cout<<temp<<endl;
            if(temp&l) hl=i;
        }
        if(hr-hl==1){
            a=l;
            b=(1LL << hr);
            c=r;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            if(b==c){ b--; }
            else{
                for(int i=hr+1;i<30;i++){
                    temp=(1LL <<i);
                    if((temp&r) && (temp&l)){
                         b+=temp; }
                }

                for(int i=0;i<hl;i++){
                    temp=(1LL <<i);
                    if((temp&l)==0 && (temp&r)==0 && (b+temp<=r)) b+=temp;

                }
            }
        }
        else{
            int mid=0,newl=(1LL <<(hl+1)), newr=(1LL <<hr);
            newl--;
            //cout<<newl<<" and high "<<newr<<" and bits: "<<hl<<" "<<hr<<endl;
            for(int i=hl+1;i<hr;i++){
                temp=(1LL <<i);
                mid+=temp;
                //cout<<temp<<" ";
            }
            //cout<<endl;

            a=newl; b=mid; c=newr;
            for(int i=hr+1;i<30;i++){
                temp=(1LL <<i);

                if((temp&r) && (temp&l)){
                    //cout<<"adding: "<<temp<<" "<<r<<" "<<l<<endl;
                    a+=temp; b+=temp; c+=temp; }
            }

        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
