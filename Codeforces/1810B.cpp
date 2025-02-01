#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst,n;
    cin>>tst;
    while(tst--){
        cin>>n;
        if(n==1) cout<<1<<endl<<1<<endl;
        else if(n%2==0) cout<<-1<<endl;
        else {
            stack<int> s;
            while(n>1){
                if(((n-1)/2)%2){ s.push(2); n=(n-1)/2;}
                else{ s.push(1); n=(n+1)/2;}
            }
            cout<<s.size()<<endl;
            while(!(s.empty())){
                cout<<s.top()<<" ";
                s.pop();
            }
            cout<<endl;
        }
    }
}
