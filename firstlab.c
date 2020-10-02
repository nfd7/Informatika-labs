#include <stdio.h>
int main()
{
	float a[10];
	int i, k;
	for (i = 0; i < 10; ++i)
	{
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	float min, max, S;
	min = 10;
	k = 1;
		while (k <= 38)
			{
				min = min * 10;
				++k;
			}
	max = 0;
	S = 0;
	for (i = 0; i < 10; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (i = 0; i < 10; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	S = max - min;
	printf("Max - Min = %f", S);
	return 0;
}