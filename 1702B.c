#include<stdio.h>
int main(void){
    int tst,x,day,cou;
    char s[100000],s1,s2,s3;
    scanf("%d", &tst);
    while(tst--){
        scanf("%s", &s);
        x=strlen(s);
        cou=0;day=0; s1='\0';s2='\0';s3='\0';
        for(int i=0;i<x;i++){
            if(s[i]==s1 || s[i]==s2 || s[i]==s3){continue;}
            else if(cou==0){s1=s[i]; cou++;}
            else if(cou==1){s2=s[i]; cou++;}
            else if(cou==2){s3=s[i]; cou++;}
            if(cou==3){day++; cou=0;s1='\0';s2='\0';s3='\0';}
        }
        //cou<3 hole day+1kre print and last word ta continuously check krar jnnop do while diye check?
        printf("%d", day);
    }
}
