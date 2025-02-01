#include<bits/stdc++.h>
using namespace std;
int main(void){
   int tst,q;
   string s,l,r;
   cin>>tst;
   while(tst--){
      cin>>s>>q>>l>>r;
      int n=s.size();
      int t1,t2,j=0,newj=0,num;
      for(int i=0;i<q;i++){
        t1=l[i]-48;
        t2=r[i]-48;
        num=t1;
        while(num<=t2){
            int k=j;
            while(k<n){
                if(num!=s[k]-48){ k++; }
                else break;
            }
            newj=max(k,newj);
            num++;//cout<<newj<<" ";
        }
        if(j>n)break;
        else j=newj+1;
      }
      if(j>n) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
}
