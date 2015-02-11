#include <stdio.h>
#include "sortingfunction.c"
#define max 127
#define MAX 127



void create_maxheap(int*a,int l)
{
	int *left;
	int*right;
	int * node;

	node=a;
	left=a+(node-a)*2+1;	// define left leaf
	right=left+1;			// define right leaf
	if ( right-a<l) 		//there is a right leaf
	{
		if (*right>*left) swap (left,right);
		if (*node<*left) swap ( left,node );
		create_maxheap_second_step(a,left,l);
		create_maxheap_second_step(a,right,l);	// as a is root, push the biggest element onto the root


//		create_maxheap_second_step(a,left,l);	// as left is root, push the biggest element onto the root
//		create_maxheap_second_step(a,right,l);	// as right is root, push the biggest element onto the root
	}
	else if (left-a<l)
	{
		if (*node<*left); swap (node,left);
	}


}

void create_maxheap_second_step(int*a,int *node,int l)
{
	int *left;
	int*right;
	left=a+(node-a)*2+1;	// define left leaf
	right=left+1;			// define right leaf
	if ( right-a<l) 		//there is a right leaf
	{
		if (*right>*left) swap (left,right);
		if (*node<*left) swap ( left,node );
		create_maxheap_second_step(a,left,l);
		create_maxheap_second_step(a,right,l);

//		create_maxheap_second_step(a,left,l);	// as left is root, push the biggest element onto the root
//		create_maxheap_second_step(a,right,l);	// as right is root, push the biggest element onto the root
	}
	else if (left-a<l)
	{
		if (*node<*left); swap (node,left);
	}

}


void main ()
{
	int a[max];
	int l;
	int i;
	l=nainput(a);

	// max heap



	create_maxheap(a,l);


	naoutput(a,l);




}




