#include <stdio.h>
int main()
{
 int n,a,one=0,two=0,three=0,four=0,taxi=0,small,rem;
 scanf("%d",&n);
 while(n--){
 scanf("%d",&a);
 if(a==1) one ++;
 else if(a==2) two++;
 else if(a==3) three++;
 else four++;
 } taxi=taxi+four;
   small=one; if(one>three) small=three;
   taxi=taxi+small;
   one=one-small; three=three-small;
   if(two%2==0){ taxi=taxi+two/2; if(one%4==0) taxi=taxi+one/4; else taxi=taxi+one/4+1;}
   else{ rem=2*two+one; if(rem%4==0) taxi=taxi+rem/4; else taxi=taxi+rem/4+1;}
    taxi=taxi+three;

   printf("%d",taxi); return 0;
}
