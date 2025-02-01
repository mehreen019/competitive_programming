#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,t,et,qt;
    cin>>n;
    t=((n-(n%7))/7)*2;
    if((n%7)>2) et= t+ 2;
    else et=t + (n%7);
    if((n%7)>5) qt= t+ 7-(n%7);
    else qt=t;
    cout<<et<<" "<<qt;
}
