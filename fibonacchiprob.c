#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n==0){printf("0");}
	else if(n==1){printf("1");}
	else {printf("%d", (n-1)+(n-2));}
	return 0;
}
