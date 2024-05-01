#include<bits/stdc++.h>
using namespace std;
long long maxx(long long x, long long y, long long z){
    if(x>z)
        return x>y ? x:y;
    else
        return y>z ? y:z;
}

int main(void){
    long long tst,n;
    string s;
    cin>>tst;
    while(tst--){
        long long x=0,y=0,xc=0,xc1=0,yc=0,yc1=0,res=0;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1')x++;
            if(s[i]=='0')y++;
        }
        for(int i=0;i<n;i++){
            while(s[i]=='1'){
                if(s[i+1]=='1'){xc1++; i++; }
                else break;
            }
            if(xc1>xc) xc=xc1;
            xc1=0;
        }
        for(int i=0;i<n;i++){
            while(s[i]=='0'){
                if(s[i+1]=='0'){yc1++; i++; }
                else break;
            }
            if(yc1>yc) yc=yc1;
            yc1=0;
        }
        res=maxx(x*y,(yc+1)*(yc+1), (xc+1)*(xc+1) );
        cout<<res<<endl;
        //cout<<x<<y<<xc<<yc<<endl;
    }
}
