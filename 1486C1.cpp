#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,l,r,t,x,y,mid;
    bool u=1;
    stack<int> idx;
    cin>>n;
    l=1,r=n;
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>x;
    idx.push(x);
        while(l+1!=r){
            t=idx.top();
            mid=(l+r)/2;
            //cout<<"l: "<<l<<"mid: "<<mid<<"r: "<<r<<endl;
            //cout<<t<<endl;
            if(r-l==2){
                cout<<"? "<<l<<" "<<mid<<endl;
                cin>>x;
                if(t<=mid){

                    if(x==t) r=mid;
                    else { x=r; u=0; }
                }
                else if(t==r){
                    r=mid;
                    idx.push(x);
                }
                break;
            }

            cout<<"? "<<l<<" "<<mid<<endl;
            cin>>x;

            cout<<"? "<<mid+1<<" "<<r<<endl;
            cin>>y;

            if(t==x){
                r=mid;
            }
            else if(t==y){
                l=mid+1;
            }
            else{
                if(t<=mid){
                    l=mid+1;
                    idx.push(y);
                }
                else {
                    r=mid;
                    idx.push(x);
                }
            }
        }
    if(u){if(l==idx.top()) x=r;
    else x=l;}
    cout<<"! "<<x<<endl;

}
