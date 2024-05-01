#include<stdio.h>
int main(void)
{
    int tst,n1,n2,n3,n4,cou;
    scanf("%d", &tst);
    for(int i=0;i<tst; i++){cou=0;
      scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        if(n1<n3 && n1<n4){cou++;}
            if(n2<n3 && n2<n4){cou++;}
        if(n3<n1 && n3<n2){cou++;}
            if(n4<n1 && n4<n2){cou++;}
        if(cou>=2){printf("NO\n");}
        else{printf("YES\n");}
    }

}
