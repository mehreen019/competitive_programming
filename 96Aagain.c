#include<stdio.h>
#include<string.h>
int main(void){
    char s[101];
    int cou1=0,cou2=0;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){cou1=0;cou2=0;
        while(s[i]=='0'){
            if(s[i+1]==s[i]){cou1++; i++;}
            else break;
        }//printf("%d",cou1);
        if(cou1>=6){printf("YES"); return 0;}
        while(s[i]=='1'){
            if(s[i+1]==s[i]){cou2++; i++;}
            else break;
        }//printf("%d",cou2);
        if(cou2>=6){printf("YES"); return 0;}

    }
    printf("NO");
}
