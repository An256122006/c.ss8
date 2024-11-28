#include <stdio.h>
int main()
{
	int hang, cot;
	printf ("moi ban nhap hang:");
	scanf ("%d",&hang);
	printf ("moi ban nhap cot:");
	scanf ("%d",&cot);
	int a[hang][cot];
	for (int i=0; i<hang; i++)
	{
		for (int j=0; j<cot; j++)
		{
			printf ("moi ban nhap hang thu %d gia tri thu %d:\n",i+1,j+1);
			scanf ("%d",&a[i][j]);
		}
	} 
	int sum =0;
	for (int i=0; i<cot; i++)
	{
	   	sum = sum +a[0][i];
		   if (hang>1)
		   {
		      sum = sum + a[hang-1][i];   	
		   } 
	}
	for (int j=1; j<hang-1; j++)
	{
		sum = sum + a[j][0];
		if (cot>0)
		{
			sum= sum + a[j][cot-1]; 
		 } 
	}
	printf ("tong bien = %d",sum);
	return 0; 
	 
}
