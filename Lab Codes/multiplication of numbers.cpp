#include <stdio.h>

int main(){
	int number , i;
	printf("Enter the number to generate the table: ");
	scanf("%d", &number);
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", number , i , number * i);
		
	}
	return 0;
	
}
