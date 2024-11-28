#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,1,2,2,3,2,2};
	int maxtrung=0, sotrung;
	for (int i= 0; i<13; i++)
	{
	   int solantrung=0;
		for (int j= 0; j<14; j++) 
		{
			if (a[j]==a[i])
			{  
			 solantrung = solantrung +1;
		    }
		}
		if (solantrung > maxtrung)
		{
			maxtrung= solantrung;
			sotrung=a[i]; 
		 } 
	} 
	 printf ("so trung nhieu nhat la :%d", sotrung);
	 return 0; 
 } 
