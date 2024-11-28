#include <stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}}, max =a[0][0];
	for (int i=0; i<2; i++)
	{
		for (int j=2; j<3; j++)
		{
			if (max < a[i][j]);
			{
				max = a[i][j];
			}
		}
	}
	printf ("max=%d",max);
	return 0;
}
