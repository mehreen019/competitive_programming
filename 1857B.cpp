#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    string s;
    cin>>tst;
    while(tst--){
        cin>>s;
        int l=s.size();
        for(int i=l-1;i>0;i--){
            if(s[i]-'0'>=5){
                s[i]='0';
                while(s[i-1]=='9' && i-1>0){
                    s[i-1]='0';
                    i--;
                }
                s[i-1]++;
            }
        }
        if(s[0]-'0'>=5){
            s[0]='0';
            cout<<1<<s<<endl;
        }
        else cout<<s<<endl;
    }

}
