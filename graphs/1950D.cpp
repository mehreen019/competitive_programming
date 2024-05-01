//1, 10, 11, 101, 111, 1011, 1101,
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXX=2e5+7;
vector<int> allPrime;

int decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    int temp=0, mul=1;

    for (int j = i - 1; j > 0; j--)
        mul*=10;

    for (int j = i - 1; j >= 0; j--){
        temp+= (mul*binaryNum[j]);
        mul/=10;
    }
    return temp;
}

void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            //cout<<p<<endl;
            int temp = decToBinary(p);
            //cout<<temp<<endl;
            allPrime.push_back(temp);
            //cout<<p<<" ";
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main(void){
    int tst;
    allPrime.push_back(1);
    SieveOfEratosthenes(MAXX);
    cin>>tst;
    while(tst--){
        int n,temp, tp;
        cin>>n;
        bool ans=0;
        tp=n;
        /*while(!pq.empty()){
            tp=pq.front();
            pq.pop();*/

            if(n==1) cout<<"YES"<<endl;
            else{
            for(int i=0;i<allPrime.size();i++){
                if(allPrime[i]> (tp/2)) break;
            //cout<<allPrime[i]<<endl;
                if(tp%allPrime[i]==0){
                    temp=tp/allPrime[i];
                    //cout<<temp;
                    string res = to_string(temp);
                    int cou=0;
                    for(int j=0;j<res.size();j++){
                        if(res[j]=='0' || res[j]=='1') cou++;
                        else break;
                    }
                    if(cou==res.size()){ ans=1; break; }
                    else if(temp%allPrime[i]==0 && allPrime[i]!=1){
                        while(temp>=1){
                            temp=temp/allPrime[i];
                            //cout<<temp;
                            string res = to_string(temp);
                            int cou=0;
                            for(int j=0;j<res.size();j++){
                                if(res[j]=='0' || res[j]=='1') cou++;
                                else break;
                            }
                            if(cou==res.size()){ ans=1; break; }
                            else if(temp%allPrime[i]) break;
                        }
                    }
                }
            }
            /*if(ans) break;
        }*/
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

}
