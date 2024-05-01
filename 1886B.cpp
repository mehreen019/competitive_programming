#include<bits/stdc++.h>
using namespace std;
int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        double x1,y1,x2,y2,p1,p2,ans;
        cin>>p1>>p2>>x1>>y1>>x2>>y2;
        double d1=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
        double d2=sqrt(pow(abs(x1-p1),2)+pow(abs(y1-p2),2));
        double d3=sqrt(pow(abs(p1-x2),2)+pow(abs(p2-y2),2));
        double h1=sqrt( x1*x1 + y1*y1 );
        double h2=sqrt( x2*x2 + y2*y2 );
        double c1=max(d2, h1), c2=max(d3,h2);

        if(c1>(d1/2)){ ans=c2; cout<<"c1";}
        else if(c2>(d1/2)){ ans=c1;cout<<"c2";}
        else if(d2<=(d1/2)){ ans=max(d1/2,max(h2,d2)); cout<<"c3";}
        else if(d3<=(d1/2)){ ans=max(d1/2,max( h1,d3)); cout<<"c4";}
        /*if(d2<=(d1/2)){ cout<<setprecision(11)<<h1<<"c1"<<endl; }
        else if(d3<=(d1/2)){ cout<<setprecision(11)<<h2<<"c2"<<endl; }
        else if(d2<=d3) cout<<setprecision(11)<<min(d2,h1,)<<"c3"<<endl;
        else if(d2>d3) */
        cout<<setprecision(11)<<ans<<endl;
    }
}
