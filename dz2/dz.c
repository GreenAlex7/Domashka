#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define N 8 
#define M 8 


void matrica_chisel (int O[N][M])
{
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			if (i == 0 || j == 0 || i % (N - 1) == 0 || j % (M - 1) == 0)
				O[i][j] = 1;
			else
				O[i][j] = rand() % 2 ? rand() % 2 : 0;
}

void matrica_vivoda (int O[N][M])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
			printf("%d", O[i][j]);
		printf("\n");
	}

}

void Changing_null_on_x (int O[N][M], int x, int i, int j)
{


	if (i < N && j < M)
	{
		if (O[i][j] == 0)
		{
			O[i][j] = x;
			Changing_null_on_x(O, x, i, j + 1);
			Changing_null_on_x(O, x, i, j - 1);
			Changing_null_on_x(O, x, i - 1, j);
			Changing_null_on_x(O, x, i + 1, j);

		}
		else if (O[i][j] == 1)
		{
			return;
		}

	}

}




int main()
{
	int O[N][M];
	int x;
	int i;
	int j;
	printf("Pot\n");
	matrica_chisel(O);
	matrica_vivoda(O);
	printf("Int x:");
	scanf("%d", &x);
	printf("First coordinate:");
	scanf("%d", &i);
	printf("Second coordinate:");
	scanf("%d", &j);
	printf("Pot10\n");
	Changing_null_on_x(O, x, i, j);
	matrica_vivoda(O);

	return 0;
}
