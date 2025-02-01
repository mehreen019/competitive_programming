#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,b,h,c;
    cin>>tst;
    while(tst--){
        cin>>b>>h>>c;
        if(b<=h+c){
            cout<<(b*2)-1<<endl;
        }
        else if(h+c<b){
            cout<<((h+c)*2)+1<<endl;
        }

    }
}
