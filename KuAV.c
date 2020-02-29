#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Q 15
#define Z 15

int main()
{
    srand(time(0));
	int A[Q][Z];
	int i, j;

	for (i = 0; i < Q; i++) {
		for (j = 0; j < Z; j++) {
			if (i == 0 || j == 0) {
				A[i][j] = 1;
			}
			else {
				A[i][j] = rand()%2;
			}
			if (i % (Q - 1) == 0) {
				A[i][j] = 1;
			}
			else if (j % (Z - 1) == 0) {
				A[i][j] = 1;
			}

		}
	}

	printf("Square:\n");
	int number = 0;
	for (i = 0; i < Q; i++) {
		for (j = 0; j < Z; j++)
		{
			printf("%d", A[i][j]);
			number++;
			if (number == 15)
			{
				printf("\n");
				number = 0;
			}
		}
	}

	return 0;
}
