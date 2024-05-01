#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        vector<char> v;
        char x;
        for(int i=0;i<64;i++){
            cin>>x;
            if(x!='.') v.push_back(x);
        }
        for(int i=0;i<v.size();i++) cout<<v[i];
        cout<<endl;
    }
}
