#include<stdio.h>

int main(void){
        for(int i=3; i>0;i--){
            for(int j=1; j<=i;j++){
            printf(" ");}
            for(int j=3; j>=i;j--){
            printf("*");}
            for(int j=2; j>=i;j--){
            printf("*");}

        printf("\n");
        }
        for(int i=3; i>0;i--){
        for(int j=3; j>=i;j--){
            printf(" ");}
        for(int j=1; j<=i;j++){
            printf("*");}
        for(int j=2; j<=i;j++){
            printf("*");}
            printf("\n");
}
}





