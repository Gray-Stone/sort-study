#include <stdio.h>
#include "sortingfunction.c"

#define max  127




void asd (int *a, int l) // resourse wasting and stupied methed
{
	int *p,*temp;
	p=a;
	--l;
	for (;l>0;l--)
	{
		for (p=a;p<(a+l);p++)
		{
			if ( (*p)>*(a+l) )
				{
					swap (p,(a+l));
				}
		}
	}

}




void selectionsort_test (int *a , int l)
{
	int *p,*temp;
	p=a;
	l;
	for (;l>0;l--)						// every time ,last one is the largest in array, so shorten the sorting array every time.
	{
		for (p=temp=a;p<(a+l);p++)		// pointer p run from the first to the last
		{
			if (  *temp < *p)			// let temp point to the largest int for now
			{
				temp =p ;
			}
		}
		printf ("temp: %d/n",*temp);	// debuging useage .

		swap (temp,p-1);				// put the largest int to the back
		naoutput(a,l);					// debugging useage . this will show how the process was done.
	}

}


void main ()
{
	int a[max];
	int b[max];
	int l;


	while (1)
	{

		l=nainput(a);
		selectionsort(a,l);
		naoutput(a,l);
		scanf ("%s",b);  			// clean the input buffle

	}


}
