#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    char c; string s;
    cin>>tst;
    while(tst--){
    int x1,y1,x2,y2,cou=0,cou1=0;
        cin>>n>>c>>s;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                x1=i+1; break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==c){
                y1=i+1;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                y2=i+1;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                x2=i+1; break;
            }
        }
       //cout<<x1<<y1<<x2<<y2;
        if(c=='g'){cout<<0<<endl; }
        else if(y2<y1){
            for(int i=y2;i<n;i++){
                if(s[i]!=c)continue;
                else{
                        cou1=i+1;
                        break;
                }
            }

            printf("%d\n", n-cou1+x2);
        }
        else {
            for(int i=x1;i<n;i++){
                if(s[i]!='g')cou++;
                else{
                        cou++;
                        break;
                }
            }
            cout<<cou<<endl;
        }

    }
}
