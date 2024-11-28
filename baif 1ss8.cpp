#include <stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	for (int i=1; i>=0; --i)
	{
		for (int j=2; j>=0; --j)
		{
			printf ("%2d",a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
