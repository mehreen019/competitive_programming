#include<stdio.h>
char mstrcpy(char *a, char *b){int i;
    for(i=0; b[i]!='\0';i++){
        a[i]=b[i];
    }
    a[i]=b[i];
}
char mstrcat(char *a, char *c){int i,j;
    for(i=0; a[i]!='\0';i++)a++;
    for(j=0; c[j]!='\0';j++){
        a[j]=c[j];
    }
}
int mstrlen(char *a){int cou=0;
    for(int i=0;a[i]!=0;i++)
    {
        cou++;
    }
    return cou;
}
 int main(){
 char str1[500] = "Hello";
 char str2[500] = "World";
 char str3[500];
 int len;
 mstrcpy(str3, str1);
 printf("%s\n",str3);
 mstrcat(str3, str2);
 printf("%s\n",str3);
len = mstrlen(str3);
 printf("%d", len);
  }
