#include <stdio.h>
#include "sortingfunction.c"
#define max 127
#define MAX 127

void marchsort (int *a, int l )
{
	int b[l];
	int i;
	int *p, *b1,*b2;
	int *temp ;
	p=a;
	b1=b;
	b2=&b[l/2];

	if (l>1) // if this array could be divided
	{

		// copy the array //
		for ( i =0; i<l;i++,p++)
		{
			b[i]=*p;
		}

	//	printf("get array     ");
	//	naoutput(a,l);


		// divide //
		marchsort(b1,l/2);
		marchsort(b2,l-l/2);


		// march //
		p=a;

		for ( p=a;(b1<a+l/2 || b2<a+l-1) && p<a+l;p++)
		{
			if (*b1<*b2 && b1<a+l/2)
			{
				*p=*b1;
				b1++;
			}
			else if (b2<a+l-1)
			{
				*p=*b2;
				b2++;
			}

			else if (b1<a+l/2 && b2>=a+l-1)
			{
				*p=*b1;
				b1++;
			}

		}


	}



}


void main ()
{
	int a[max] ;
	int l ;

	l=nainput(a);

	marchsort(a,l);

	naoutput(a,l);
}
