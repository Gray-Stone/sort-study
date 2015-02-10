#include <stdio.h>
#include "sortingfunction.c"
#define max 127
#define MAX 127

void matainmaxheap (int* a ,int l )
{

	int *left;
	int*right;
	int * parent;
	int i,hight;

	for (i=0;i<)
		for (parent=a; (parent-a) < l/2; parent ++)
		{

			left=a+(parent-a)*2+1;	// define left leaf
			right=left+1;			// define right leaf
			if (right-a<l )	// if there are a right side, make it smaller than left one.
			{
				if (*right>*left)
				{
					swap (right,left);
				}
			}

			if (*left>*parent)	//  make left side smaller than parent.
			{
				swap(left,parent);
			}

			if (right-a<l )	// if there are a right side, make it smaller than left one.
			{
				if (*right>*left)
				{
					swap (right,left);
				}
			}
		}



}


void main ()
{
	int a[max];
	int l;
	int i;
	l=nainput(a);

	// max heap



	matainmaxheap(a,l);


	naoutput(a,l);




}




