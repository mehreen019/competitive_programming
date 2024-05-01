#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,s,f,c=0;
    list<int> l;
    cin>>n;
    for(int i=1;i<=n;i++){
        l.push_front(i);
    }
    for(auto i=l.begin();i!=l.end(); ){
        auto t=i++;
        s=*i^*t;
        //cout<<*i<<*t;
        if(*t<*i) break;
        auto it=find(l.begin(),l.end(),s);
        if(it != l.end()){
            //cout<<*it;
            auto k=t++;
            i++;
            //cout<<*i;
            f=(*k+*t+*it)/2;
            if(f==*k || f==*t || f==*it) continue;
            else{ l.erase(k); l.erase(t); l.erase(it); c++;}
        }

       //cout<<" ";
    }
    cout<<c<<endl;
}
