#include <stdio.h>

main(){

	int x,y;
	printf("Escreva dois n�meros: ");
	scanf("%d %d",&x,&y);

	if (x>y) printf("%d � maior que %d",x,y);

	if (x<y) printf("%d � maior que %d",y,x);

}
