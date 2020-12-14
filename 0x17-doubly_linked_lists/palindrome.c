#include <stdio.h>

int reversed(int a)
{
	int b = 0, c = 0;

	while (a > 0)
	{
		c = a % 10;
		b = b * 10 + c;
		a = a / 10;
	}
	return (b);
}

void main(void)
{
	int a, b, c;

	for (a = 999; a >= 100; a--)
	{
		for (c = 999; c >= 900; c--)
		{
			b = a * c;
			if (b - reversed(b) == 0)
			{
				printf("the largest palindrome has be found!!\n");
				printf("%d\n", b);
				c = 1000;
			}
			if (c == 1000)
				break;
		}
		if (c == 1000)
		break;
	}
}