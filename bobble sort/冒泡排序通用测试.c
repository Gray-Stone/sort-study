# include <stdio.h>
# include <malloc.h>
//# include <string.h>
#define max 127
#include "sortingfunction.c"
/*
void swap (int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;


}


void bubblesort (int *a , int l)
{
	int *p;
	p=a;
    --l;
	for (;l>0;--l)
	{
		for(p=a;p<a+l;p++)
		{
			if ((*p)<(*(p+1)))
			{
				swap (p,p+1);
			}
		}
	}
}

*/
int main(void)
{

int a[max];
	int i=0, *temp,j=0 ,l=0,n=0,t,r=0;
	int *pa=a;
	temp =&r ;

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
	l=l-1;
	printf ("%d\n",l);				// Check how much unit in array

		for (i=0;i<l;i++)

		printf("%d ",a[i]);			// reshow the input
		printf("\n");


		bubblesort(a,l);			// sorting


		for (i=0;i<l;i++)			//out put
		printf("%d ",a[i]);
		printf("\n");


}


