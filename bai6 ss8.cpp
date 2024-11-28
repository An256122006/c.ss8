#include <stdio.h> 
int main()
{
	int b, sum=0;
	printf ("moi ban nhap gai tri cua ma tran:");
	scanf ("%d",&b); 
	int a[b][b];
	for (int i=0; i<b; i++)
	{
		for (int j=0; j<b; j++)
		{
			printf ("moi ban nhap hang thu %d gia tri thu %d:\n",i+1,j+1);
			scanf ("%d",&a[i][j]);
		}
    }
	for (int i=0; i<b; i++)
	{
		sum = sum+a[i][i]; 
    }
    for (int i=0; i<b; i++)
	{
		printf ("phan tu thu %d cua duong cheo chinh là :%d\n",i+1, a[i][i]); 
    }
    printf ("tong duong cheo:%d",sum);
	return 0;
}
