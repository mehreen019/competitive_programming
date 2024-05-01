#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    vector<int>s(n),a(n);
    int x=0,y=n-1,c=0;
    for(int i=0;i<n;i++){cin>>s[i]; a[i]=s[i];}
    sort(a.begin(),a.end());
    if(s==a){ cout<<"yes"<<endl<<1<<" "<<1<<endl; return 0;}
    for(int i=1;i<n-1;i++){
        if(s[i]>s[i+1] && s[i]>s[i-1]){
            x=i; c++;
            do{
                i++;
                if(s[i]<s[i+1]){y=i;}
                else if(i==n-1) y=i;

            }while(s[i]>s[i+1]);
            //i++;
        }
        else if(s[i]<s[i+1] && s[i]<s[i-1]){ y=i; c++;}
    }
    if(y>=n) y=n-1;
    if(x==0 && y==n-1) cout<<"yes"<<endl<<x+1<<" "<<y+1<<endl;
    else if(c==1){
        int j=y,i=x,l=(y+x)/2;
        while(i<=l){
            swap(s[i],s[j]);
            i++; j--;
        }
        //for(int i=0;i<n;i++) cout<<s[i];
        if(s==a) cout<<"yes"<<endl<<x+1<<" "<<y+1<<endl;
        else cout<<"no"<<endl;
    }
    else cout<<"no"<<endl;
    //cout<<x<<y<<c<<endl;
}
