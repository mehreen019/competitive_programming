#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        int t=s.find("WUB");
    if(t>=0){s.replace(t,3," ");}
    }
    cout << s <<endl;
    return 0;
}
