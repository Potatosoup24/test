#include <stdio.h>

int main(void)
{
	printf("Github testing");
	for (int i = 2; i < 10; i++) {
		printf("%d´Ü\n", i);
		for (int j = 1; j < 10; j++) {
			printf("\t%d X %d = %d\n", i,j,i*j);
		}
	}
	return 0;
}