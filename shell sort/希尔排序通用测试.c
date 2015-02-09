# include <stdio.h>
#define max 127
#include "sortingfunction.c"


void shellsort_test (int *a , int l)
{
	int *p;
	int i, j , n ;
	int *temp;
	printf ("start of shell \n");

	for (n=l/2,l--;n>0;n/=2)					// every n unmber in the array been picked to make up the sub array
	{

				///////////////////////////////////////////
				//	{{	//pringting sub array .
				//		printf ("sub array: \n");
				//		for (p=a;p<(a+l);p+=n)										//print loop
				//		{
				//			printf("%d ",*p);
				//		}
				//		printf ("\n");				}}
				///////////////////////////////////////////


		for (j=l;j>1;j-=n)						// selection sorting for the sub array (elements are n apart)
		{
				///////////////////////////////////////////
				//		printf ("sub array in select sort: \n");
				//		for (p=a;p<(a+l);p+=n)										//print loop
				//		{
				//			printf("%d ",*p);
				//		}
				//		printf ("\n");
				///////////////////////////////////////////

			for (temp=p=a;p<=(a+j);p+=n)		//go though the sub array to find the biggest
			{
				if (*temp<*p)
				{
					temp =p;
							// 		printf("found bigger number %d\n",*temp);
				}
			}
			swap (temp,p-n);
		}										// end of selection sorting
	}
}


void main ()

{
	int a[max];
	int l;

	l=nainput(a);

	shellsort(a,l);


	naoutput(a,l);

}
