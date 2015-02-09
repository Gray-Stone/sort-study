#include <stdio.h>
#define max 127

void swap(int* p1, int* p2);

void main()
{
	int a[max];
	int i=0, temp,j=0 ,l=0;

	// input
	printf("type in the numbers end with a e \n");
	while(scanf("%d",(a+(l++)))==1)
																		/*			{
																						printf ("get %d  	",a[l-1]);
																					}
																					;
																			for (i=0;i<l;i++)
																			printf("%d 		",a[i]);

																		*/
	{;}



	l=l-2;
/*
	// arrange
	for (i=l;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (a[j]<a[j+1])
			swap(&a[j+1],&a[j]);
		}
	}
	*/
	for(i=0;i<=l;i++)
	{
		printf("%d     ",a[i]);
	}

}




void swap (int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;


}

