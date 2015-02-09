#include <stdio.h>
#include "sortingfunction.c"
#define max 127




void quicksort_test (int * a,int l)
{
	if (l>0)
	{

		int *midp;
		int *p1,*p2;
		// one sepration //
		l--;
		midp=a+l/2;										// define mid value
							//	printf("%d \n" , *midp);

		for(p1=a,p2=a+l;p1<p2;)							// stop when two pointer match.  witch means both sides are bigger or smaller.
		{

			for (;*p1<*midp && p1<p2;p1++);				// find the fisrt value that is bigger than the mid valude from the right
			swap(p1,midp);								// switch value places
			midp = p1;

							//	printf("midp %d \n",*midp);
							//	naoutput(a,l+1);


			for (;*p2>*midp && p2>p1;p2--);				// find the fisrt value that is smaller than the mid valude from the left
			swap (p2,midp);								// switch value places
			midp = p2;
		}
		//end of one sepration //
		printf("one sppration	%d",*midp);
		naoutput(a,l+1);


		quicksort_test(a,midp-a);
		quicksort_test(midp+1,a+l-midp);
	}
}


void main ()
{
	int a[max],l;
	int j,i, n,*p1,*p2;
	int temp;

	int *p ,*midp;


	l=nainput(a);


				/*
				// first time seperation
				--l;
				n=l/2;
				i=0;j=l;
				p=a;
				for(i=0,j=l;i<j;)
				{
					printf("a[n] = %d\n",a[n]);

					for(;a[i]<a[n]&&i<j;i++){;}
					swap(&a[i],&a[n]);
					n=i;
									printf("i\n");
									naoutput(a,l+1);
					for (;a[j]>a[n]&&j>i;j--){;}
					swap(&a[n],&a[j]);
					n=j;
									printf("j\n");
									naoutput(a,l+1);
				}
				// end of first seperation
				*/

					/*
							/// first seperation pointer ///
							--l;
							p=a;
							midp=p+l/2;										// define mid value
												//	printf("%d \n" , *midp);

							for(p1=a,p2=a+l;p1<p2;)							// stop when two pointer match.  witch means both sides are bigger or smaller.
							{

								for (;*p1<*midp && p1<p2;p1++);				// find the fisrt value that is bigger than the mid valude from the right
								swap(p1,midp);								// switch value places
								midp = p1;

												//	printf("midp %d \n",*midp);
												//	naoutput(a,l+1);


								for (;*p2>*midp && p2>p1;p2--);				// find the fisrt value that is smaller than the mid valude from the left
								swap (p2,midp);								// switch value places
								midp = p2;
							}
							///end ///

							*/

	quicksort_test(a,l);

	naoutput(a,l);

}











