#include <stdio.h>

int main()
{
    int n, len, i;
    char in[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", in);
        len= strlen(in);
        if(len<=10){
            printf("%s\n", in);
        }else{
            printf("%c%d%c\n", in[0], len-2, in[len-1]);
        }
    }
    return 0;
}
