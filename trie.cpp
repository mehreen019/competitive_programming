#include<iostream>
using namespace std;
const int ALPHABET_SIZE=26;

struct tnode{
    struct tnode* children[ALPHABET_SIZE];
    bool endofWord;
};

tnode* create_node(){
    struct tnode* temp= new tnode();
    for(int i=0;i<ALPHABET_SIZE;i++){
        temp->children[i]=NULL;
    }
    temp->endofWord=false;
    return temp;
}

struct tnode* root = create_node();

void Insert(string s){
    struct tnode* cur = root;
    for(int i=0;i<s.size();i++){
        int idx=tolower(s[i])-'a';
        if(!cur->children[idx]){
            cur->children[idx]=create_node();
        }
        cur=cur->children[idx];
    }

    cur->endofWord=true;
}

void display(struct tnode* temp, char s[], int level){
    if(temp->endofWord){
        s[level]='\0';
        cout<<s<<endl;
    }
    for(int i=0;i<ALPHABET_SIZE;i++){
        if(temp->children[i]){
            s[level]=i+'a';
            //cout<<s;
            display(temp->children[i], s, level+1);
        }
    }
}


int main(void){
    string s;
    int n;
    cin>>n;
    char e[200];
    while(n--){
        cin>>s;
        Insert(s);
    }
    display(root,e,0);
}
