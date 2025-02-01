#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,w,t,x=-1,y=0; bool l=0;
    string s,g;
    cin>>n>>w;
    string v[n+1];
    for(int i=0;i<n;i++){ cin>>v[i]; }
    cin>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j].size()<v[i].size())
            {string a=v[i];
            v[i]=v[j];
            v[j]=a;}
        }
    }
    //for(int i=0;i<n;i++) cout<<v[i]<<endl;
    t=s.size();
    for(int i=0;i<n;i++){
        if(v[i].size()<t){ x=i; l=1;}
        else if(v[i].size()==t) y=i;
        else if(v[i].size()>t) break;
    }
    //cout<<x<<y<<" ";
    if(x==-1) cout<<1<<" "<<((y/w)*5)+y+1;
    else{
    x++;
    cout<<x+(((x)/w)*5)+1<<" "<<((y/w)*5)+y+1;
    }
}
