#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    string s;
    cin>>tst;
    while(tst--){
        cin>>n>>s;
        vector<int> v;
        int sum=0,t;
        for(int i=0;i<n;i++){
            if(s[i]=='0') v.push_back(i+1);
        }
        //for(int i=0;i<v.size();i++) cout<<v[i];
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[j]%v[i]==0){ sum+=v[i]; t=j; j++; v.erase(v.begin()+t);}
            }
            sum+=v[i];
            t=i; i++;
            v.erase(v.begin()+i);
        }
        cout<<sum<<endl;
    }
}
