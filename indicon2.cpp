#include<bits/stdc++.h>
using namespace std;
int main(void){
    int o;
    string a,b; vector<char>v;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
           if(a[i]!=a[i-1] && a[i]!=a[i+1])v.push_back(a[i]);
    }
    for(vector<int>::size_type i=0;i<v.size();i++){
        b.erase(b.find(v[i]));
    }
    cout<<b<<endl;

}
