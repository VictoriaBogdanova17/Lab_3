#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
	int* ms;
	int i, n, s1, s2, k1, k2, k3;
	setlocale(LC_ALL, "russian");
	printf("введите количество чисел\n");
	do {
		fflush(stdin);
		scanf_s("%d", &n);
		system("CLS");
	} while (!n || n < 0);
	if (!(ms = (int*)malloc(n * sizeof(int)))) return 0;
	printf("введите целые числа\n");
	for (i = 0; i < n; i++)
		scanf_s("%d", ms + i);
	system("CLS");
	for (i = 0; i < n; i++)
		printf("%d ", *(ms + i));
	k1 = k2 = k3 = s1 = s2 = 0;
	for (i = 0; i < n; i++)
	{
		if (*(ms + i) == 0) k3++;
		else if (*(ms + i) > 0)
		{
			k1++;
			s1 += *(ms + i);
		}
		else {
			k2++;
			s2 += *(ms + i);
		}
	}
	printf("\n количество положительных чисел = %d, их сумма = %d", k1, s1);
	printf("\n количество отрицательных чисел = %d, их сумма = %d", k2, s2);
	printf("\n количество 0 = %d", k3);
	return 0;
}