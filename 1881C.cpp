#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst, n;
    cin>>tst;
    while(tst--){
        cin>>n;
        char r[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>r[i][j];
            }
        }
        int cou=0,l=2;
        while(l--){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(r[i][j]!=r[n-j-1][i]){
                    char x=r[i][j], y=r[n-j-1][i];
                    cou+=abs(x-y);
                    //cout<<cou<<" "<<x<<" "<<y<<" ";
                    x>y ? r[n-1-j][i]=x: r[i][j]=y;
                }
            }
        }}
        cout<<cou<<endl;
    }

}
