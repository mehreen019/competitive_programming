#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int sx=1,sy=1,ex=n,ey=n,temp=n;
        cout<<sx<<" "<<sy<<endl;
        cout<<ex<<" "<<ey<<endl;
        if(n>2){
            cout<<ex<<" "<<ey-1<<endl;
            if(n>3){
                temp=n-3;
                int ay=2;
                while(temp--){
                    cout<<sx<<" "<<sy+ay<<endl;
                    ay++;
                }
            }
        }
    }
}
