#include <stdio.h>

int main(void)
{
	for (int i = 1 ; i <= 5; i++)
	{
		for (int k = 5; k >= i; k--) {
			printf("S");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}