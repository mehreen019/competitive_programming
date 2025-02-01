#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,c,res;
    int ar[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
        }
    }
    a=ar[0][1]+ar[0][2];
    b=ar[2][0]+ar[0][2];
    c=ar[1][2]+ar[0][2];
    if(c>a) {
        res=b/2;
        ar[1][1]=res;
        ar[0][0]=res-(a-b);
        ar[2][2]=res+(b-c);
    }
    else if(a>c) {
        res=b/2;
        ar[1][1]=res;
        ar[0][0]=res+(b-a);
        ar[2][2]=res-(c-b);
    }
    else if(a==b && b==c){
        res=b/2;
        ar[1][1]=res;
        ar[0][0]=res;
        ar[2][2]=res;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

}
