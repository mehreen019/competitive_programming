#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int a1,a2,b1,b2, cnt=0, cnt2=0;
        cin>>a1>>a2>>b1>>b2;

        if((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2)) cnt++;
        if((a1>b2 && a2>=b1) || (a1>=b2 && a2>b1)) cnt++;
        if((a2>b1 && a1>=b2) || (a2>=b1 && a1>b2)) cnt++;
        if((a2>b2 && a1>=b1) || (a2>=b2 && a1>b1)) cnt++;

        cout<<cnt<<endl;

    }
}
