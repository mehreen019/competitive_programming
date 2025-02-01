#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(void){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int r[n], t, t2,t3, popped;
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        vector<int> gcd;
        bool ans=1; int h=0;
        gcd.push_back(__gcd(r[0], r[1]));
        for(int i=1;i<n-1;i++){
            t=__gcd(r[i], r[i+1]);
            if(i+2 <n) t2=__gcd(r[i+1], r[i+2]);
            else t2=LLONG_MAX;

            if(t<gcd.back() && t<t2){
                if(h>=1){ ans=0; break; }
                    //cout<<"ok";
                    popped = gcd.back();
                    gcd.pop_back();
                    if(gcd.size()==0){
                        if(t>t2){
                            gcd.push_back(__gcd(r[i-1], r[i+1]));
                            if((i+3) <n) t3=(__gcd(r[i+2], r[i+3]));
                            else t3=LLONG_MAX;
                            if(t2<gcd.back() || t2>t3){
                                gcd.pop_back();
                                gcd.push_back(popped);
                                gcd.push_back(__gcd(r[i],r[i+2]));
                                i++; h++;
                            }
                            else{
                                gcd.push_back(t2);
                                h++;
                            }
                        }
                        else{
                        gcd.push_back(t);
                        gcd.push_back(t2);
                        h++;
                        }
                    }
                    else{
                        t3=(__gcd(r[i-2], r[i]));
                        if(t<t3 || t2<t){
                            //cout<<"ok";
                            t2=(__gcd(r[i-1], r[i+1]));
                            if((i+3)<n) t3=(__gcd(r[i+2], r[i+3]));
                            else t3=LLONG_MAX;

                            if(t2<gcd.back() || t2>t3){
                                gcd.push_back(popped);
                                gcd.push_back(__gcd(r[i],r[i+2]));
                                i++; h++;
                            }
                            else{
                                gcd.push_back(t2);
                                h++;
                            }
                        }
                        else{
                            gcd.pop_back();
                            gcd.push_back(t3);
                            gcd.push_back(t);
                            h++;
                        }
                    }
            }
            else gcd.push_back(t);
        }
        for(int i=0;i<gcd.size()-1;i++){
            if(gcd[i]>gcd[i+1]){ ans=0; break; }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
