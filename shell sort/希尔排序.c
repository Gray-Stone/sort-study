#include<stdio.h>
#define max 127

void main()
{
	int a[max];
	int i=0, *temp,j=0 ,l=0,n=0,t,r=0;
	int *pa=a;

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

	//shell
	for (n=l/2;n>0;n/=2)
	{
		for(j=l;j>0;j-=n)
		{
			temp = & a[0];
			for(i=0;i<=j;i+=n)
			{
				if((a[i])>*temp) temp=&a[i];
			}

			swap(temp,&a[i-n]);
		/*	t=*temp;
			*temp=a[i-n];
			a[i-n]=t; */

		}
	}

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
