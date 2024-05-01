#include<bits/stdc++.h>
using namespace std;
const int MAXX=2e5+5;
vector<vector<int> > edges(MAXX);
//vector<vector<int> > vis(MAXX);

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n,m,y;
        cin>>n>>m>>y;
        int r[m],cou=0,area;
        area = (0.25*n) / tan(M_PI / n);
        cout<<area<<endl;
        for(int i=0;i<m;i++){
            cin>>r[i];
        }
        for(int i=1;i<=n;i++){
            if(i+1>n) edges[i].push_back(1);
            else edges[i].push_back(i+1);

            if(i-1<0) edges[i].push_back(n);
            else edges[i].push_back(i-1);
        }
        sort(r,r+m);

        for(int x=0;x<m;x++){
            for(int y=x+1;y<m;y++){
                int i=r[x],j=r[y];

                if(abs(j-i)<=1) continue;

                //for(int x)

                edges[i].push_back(j);
                edges[j].push_back(i);

                cout<<i<<" "<<j<<endl;
                int t1,t2;
                for(auto it: edges[i]){
                    t1=j+1; t2=j-1;
                    if(t1>n) t1=1;
                    if(t2<0) t2=n;

                    //cout<<i<<" "<<it<<endl;
                    if(it==t1){
                        cou++;
                        /*int ta= triangleArea(abs(i-t1), abs(j-i), abs(t1-j));
                        area-=ta;
                        cout<<area<<" "<<i<<" "<<j<<" "<<t1<<endl;
                        if(area==0) break;*/
                    }
                    if(it==t2){
                        cou++;
                        /*int ta= triangleArea(abs(i-t2), abs(j-i), abs(t2-j));
                        area-=ta;
                        cout<<area<<" "<<i<<" "<<j<<" "<<t2<<endl;
                        if(area==0) break;*/
                    }
                }
                for(auto it:edges[j]){
                    t1=i+1; t2=i-1;
                    if(t1>n) t1=1;
                    if(t2<0) t2=n;

                    //cout<<j<<" "<<it<<endl;
                    if(it==t1){
                        cou++;
                        /*int ta= triangleArea(abs(i-t1), abs(j-i), abs(t1-j));
                        area-=ta;
                        cout<<area<<" "<<j<<" "<<i<<" "<<t1<<endl;
                        if(area==0) break;*/
                    }
                    if(it==t2){
                        cou++;
                        /*int ta= triangleArea(abs(i-t2), abs(j-i), abs(t2-j));
                        area-=ta;
                        cout<<area<<" "<<j<<" "<<i<<" "<<t2<<endl;
                        if(area==0) break;*/
                    }
                }
            }
            if(area==0) break;
        }
        cout<<cou<<endl;
        for(int i=0;i<n;i++){
            edges[i].clear();
        }
    }
}
//2 4 4
