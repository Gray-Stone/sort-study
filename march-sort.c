#include <stdio.h>
#include "sortingfunction.c"
#define max 127
#define MAX 127

void magresort (int *a, int l )
{
	int b[l];
	int i;
	int *p, *p1,*p2;
	p=a;


	//seprate
	if ( l>1 )
	{
		magresort(a,l/2);										// first half
		magresort(a+l/2,l-l/2);									// second half

	}
	// magre

	for ( p1=a,p2=a+l/2,i=0;(p1<a+l/2 ||p2 <a+l ) && i<l;i++ )  // when one of the array and the output array is not finished
	{
		if ( *p1<*p2 && p1<a+l/2)								// if the first one is smaller
		{
			b[i]=*p1;
			p1++;
		}
		else if (p2<a+l)										//if the second one is smaller
		{
			b[i]=*p2;
			p2++;
		}

		else if (p1<a+l/2)										// if the second array is finished
		{
			b[i]=*p1;
			p1++;
		}

	}

	for (i=0;i<l;p++,i++) {*p=b[i];}							// coppect the right array back to position

}


void main ()
{
	int a[max] ;
	int l ;

	l=nainput(a);

	magresort(a,l);

	naoutput(a,l);
}
