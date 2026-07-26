#include <stdio.h>
#include <stdlib.h>

main(){
	
	int *A;
	A=(int*)calloc(8,sizeof(int));

	for(int i=0; i<8; i++)
	printf("%d ",A[8]);
}
