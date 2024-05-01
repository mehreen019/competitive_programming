#include<bits/stdc++.h>
using namespace std;
const int MAXX=2e5+5;

int main(void){
    int tst;
    string s;
    cin>>tst;
    while(tst--){
        cin>>s;
        map<char, int> m;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]!=0){
                m[s[i]]--;
                cnt+=m.size();
                m.clear();
                cnt--;
                //cout<<i<<" "<<cnt<<endl;
            }
            else m[s[i]]++;
        }
        cnt+=m.size();
        cout<<cnt<<endl;
    }
}
