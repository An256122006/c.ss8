#include <stdio.h>
int main()
{
	int n, b, a[2][3]={{1,2,3},{4,5,6}};
	printf ("moi ban nhap gia tri n:");
	scanf ("%d",&n);
    for (int i=0; i<2; i++)
    {
    	for (int j=0; j<3; j++)
    	if (n==a[i][j])
    	{
    		printf ("phan tu o vi tri hang %d cot %d",i+1,j+1);
    		b=1;
    		break;
		}
		
	}
	if (b==0)
	{
		printf ("ko co gia tri nao trong mang");
	}
	return 0;
}
