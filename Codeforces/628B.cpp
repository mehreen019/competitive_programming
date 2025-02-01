#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin>>s;
    int cou=0,n=s.size();
    for(int i=0;i<n-1;i++){
        int x=s[i]-48,y=s[i+1]-48;
        if(x%4==0){ cou++; }
        if((x*10+y)%4==0){
            cou++;
            cou+=i;
        }
        else if((x*100+))

    }
    cout<<cou;
}
