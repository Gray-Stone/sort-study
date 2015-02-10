#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#define max 127
#include "sortingfunction.c"
int main ()
{
	int a[max],l;
	int j,i, n,*p1,*p2;
	int temp;
	l--;
	int *p ,*midp;

	l=nainput(a);
	quicksort(a,l);
	naoutput(a,l);

}
