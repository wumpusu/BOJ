#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h, m;

	scanf("%d" "%d", &h, &m);

	if ((0 <= h && h <= 23) && (0 <= m && m <= 59))
	{
		m = m - 45;

		if (m < 0)
		{
			m = 60 + m;
			h--;

			if (h < 0)
			{
				h = 24 + h;
				printf("%d %d", h, m);
			}
			else
			{
				printf("%d %d", h, m);
			}
		}
		else
		{
			printf("%d %d", h, m);
		}
	}
}