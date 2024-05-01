#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argv, char** argc){
    int n; char ch,s[50];
    FILE* fp1; FILE* fp2;
    n=atoi(argc[2]);

    for(int i=0;i<n;i++){

    fp1 = fopen(argc[1], "rb");
    itoa(i+1, s, 10);
    strcat(s, ".png");
    fp2 = fopen(s, "wb");
    while(!feof(fp1)){
        fscanf(fp1, "%c", &ch);
        fprintf(fp2, "%c", ch);
    }
         fclose(fp2);
         fclose(fp1);
    }

}
