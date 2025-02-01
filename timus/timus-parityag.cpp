#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX=100005;
int parent[MAX];
string parity[MAX];
int ans=-1;

///set each nodes parent to itself
void make_set(int v) {
    parent[v] = v;
    parity[v]="";
}

///find parent of a value by following it's chain upwards
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

///find parents, and if they don't match, set one's parent to another's
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        {
            parent[b] = a;
        }
}

int main(void){
    int n,q,a,b,inq,rep,cou=0;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        make_set(i);
    }
    inq=q;
    string par;
    while(q--){
        cin>>a>>b>>par;
        if(inq-1==q){
            rep=a;
        }
        int pa=find_set(a);
        //cout<<pa<<" "<<a<<endl;
        if(pa==a && parity[a]==""){
            for(int i=a;i<=b;i++){
                union_sets(rep,i);
            //cout<<"ok 1"<<parity[pa]<<" 2"<<par<<endl;
            }
            if(inq-1==q) parity[rep]=par;
            else if(parity[rep]!=par){ parity[rep]="odd";}
            else parity[rep]="even";
            cou++;//cout<<"ok 1"<<parity[pa]<<" 2"<<par<<endl;
        }
        else{
            if(parity[pa]!=par){
                cout<<cou<<endl;
                break;
            }
            else cou++;
            //cout<<parity[pa]<<" "<<par<<endl;
        }
    }
}
