#include<stdio.h>
int main()
{
	int ans = 0;
	int temp = 1002001;
	int num[2001] = {};
	int* ptr = num;
	*ptr = temp;
	for (int i = 500; i >= 1; i--)
	{
		for (int j = 1; j <= 4; j++)
		{
			temp -= (i * 2);
			for (int k = 0;k <= 2000;k++)
			{
				if (*(ptr + k) == 0) {
					*(ptr + k) = temp;
					break;
				}
			}
		}
	}
	for (int i = 0;i <= 2000;i++)
	{
		ans += *(ptr + i);
	}
	printf("%d", ans);
	return 0;
}