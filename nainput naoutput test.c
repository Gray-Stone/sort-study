#include <stdio.h>

#define max 127

int nainput_test(int *a );

void naoutput_test (int *a , int l);


void  main()
{
	int a [max];
	int l;
	l=nainput_test (a);
	printf("input finish \n");
	printf ("%d \n",l);
	naoutput_test (a,l);
}

int nainput_test (int *a )
{
	int l=0;
	while ( scanf("%d",a++)==1 ) {l++;}
	return l;
}

void naoutput_test (int *a , int l)
{
	int *p;
	p=a;
	for (;a<(p+l);a++)
	{
		printf("%d",*a);
	}
}
