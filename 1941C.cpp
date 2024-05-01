#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n, mc=0, pc=0, mpc=0;
        string s;
        cin>>n>>s;
        size_t pos = 0;
        while ((pos=s.find("map",pos)) != string::npos) {
            mc++;
            pos += 3;
        }
        pos = 0;
        while ( (pos=s.find("pie",pos)) != string::npos) {
            pc++;
            pos += 3;
        }
        pos = 0;
        while ( (pos=s.find("mapie",pos)) != string::npos) {
            mpc++;
            pos += 5;
        }
        cout<< mpc + (mc-mpc) + (pc-mpc) <<endl;
    }
}
