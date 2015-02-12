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

void maxtotopheap (int *a,int l) // only push the max value to the top
{
	int *node , *left , *right ;

	int *largest ;


	for (node =a+l/2-1;node>=a;node--)	 // starting from the last node, orginize every node to the top
	{

		left=a+(node-a)*2+1;	// define left leaf
		right=left+1;			// define right leaf
		largest=left;
		if (right-a<l)		// if there is right side
			if (*right>*left) largest = right ;
		if (*largest>*node) swap(largest, node);	//put larget in current node
	}


}


void maxheapsort(int * a,int l)
{
	for (;l>0;l--)
	{
		maxtotopheap(a,l);
		swap(a,a+l-1);
	}
}

void main ()
{
	int a[max];
	int l;
	int i;
	l=nainput(a);





	 maxheapsort(a,l);

	naoutput(a,l);




}




