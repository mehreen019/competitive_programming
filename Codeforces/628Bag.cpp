#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin>>s;
    long long n=s.size(),cou=0;
    for(int i=n-1;i>=0;i--){
        int x=s[i]-48, y=s[i-1]-48, z=s[i-2]-48;
        if((s[i]-48)%4==0) cou++;
        if((x+y*10)%4==0 && !(i-1<0)) cou+=i;
        else if((x+y*10+z*100)%4==0 && !(i-1<0) && !(i-2<0)) cou+=i-1;
        //cout<<cou<<endl;
    }
    cout<<cou<<endl;
}
