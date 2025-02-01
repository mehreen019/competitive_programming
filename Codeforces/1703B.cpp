#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n; string s;
    cin>>tst;
    while(tst--){
        int cou=0;
        cin>>n>>s;
        sort(s.begin(), s.end());
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])cou++;
        }
        cout<<((n-cou)*2)+cou<<endl;
    }
}
