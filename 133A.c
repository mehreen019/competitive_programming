#include<stdio.h>
int main(void){
    char arr[100];
    scanf("%s", arr);
    int x;
    x=strlen(arr);
    for(int i=0; i<x; i++){
        if(arr[i]=='H'|| arr[i]=='Q'||arr[i]=='9'){
            printf("YES"); return 0;
        }
    }
    printf("NO");


}
