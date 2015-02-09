# include <stdio.h>
# include <malloc.h>
#include "sortingfunction.c"
#define max 127

void swap_test (int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;


}

int nainput_test (int *a)
{
	int l;
	printf("type in the numbers end with a e \n");		// input prompt

	while(scanf("%d",(a+(l++)))==1) 	{;}				// input. stop until it readed a not numbre char
	l=l-1;
						// Make l the number of elements in a[]
	return l;
}

int naoutput_test (int *a, int l)
{
	int i;

	for (i=0;i<l;i++)								// output
		printf("%d ",(* (a+i) ) );
	printf("\n");

}


void main ()
{
	int i,j;						//loop contural
	int a[max];						//array
	int * temp ,l ;					//value
	l=nainput(a);		//input


	for (j=l;j>0;--j)
	{
		for(i=0,temp=a;i<j;++i)
		{
			if (*temp <a[i])
				temp = &(a[i]);
		}


		swap(temp , &a[i-1]);

	}


	naoutput (a,l);

//	for (i=0;i<l;i++)								// output
//		printf("%d ",a[i]);
//	printf("\n");


}
