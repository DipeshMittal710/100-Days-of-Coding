# include <stdio.h>

int main(){
	int n, fact = 1, i;
	printf("Enter the number to find factorial: ");
	scanf("%d", &n);
	if (n<0)
		printf("Factorial of a negative number doesn't exist \n");
		else{
			for (i=1; i<=n; i++)
			fact *= i;
			printf("Factorial of %d is: %d\n", n, fact);
			
		}
		return 0;
}
