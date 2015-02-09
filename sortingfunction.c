#include<stdio.h>
#define max 127
void swap (int *p1,int *p2);
int nainput (int *a );
void naoutput (int *a , int l);

///////////////////////////////////

void bubblesort (int *a , int l);
void selectionsort (int *a , int l);

///////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// assist functions //


// 2015-1-21 Ca(OH)2 , Switch int values. 交换变量的值
void swap (int *p1,int *p2)
{
	int p;
	if (*p1!=*p2)				//  undated in 2015-01-26 for making less switches
	{
		p=*p1;
		*p1=*p2;
		*p2=p;
	}
}

// 2015-1-22 Ca(OH)2 ,number array input ; int array pointer for input, return unmber of element. 输入一组整形到给定的数组（指针）返回读入的元素个数。
// 2015-1-23 update
// 2015-1-26 note: might still have one '\n' in the buffer
int nainput (int *a )
{
	int l=0;

	printf ("Type in input unmbers. End with e \n");			// input prompt
	while ( scanf("%d ",a++)==1 ) {l++;}						// scanf until get any not int. L++ every time read more more number
	return l;
}


// 2015-1-22 Ca(OH)2 ,number array output ; int array pointer for output, int for number of elements. 输出给与的整形， int l 元素个数
// 2015-1-23 update
void naoutput (int *a , int l)
{
	int *p;
	p=a;
	printf ("result: \n");									//output prompt
	for (;a<(p+l);a++)										//print loop
	{
		printf("%d ",*a);
	}
	printf ("\n");
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sorting functions //


// 2015-1-22 Ca(OH)2 ，biggest to smallest. 冒泡排序 从大到小
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




// 2015-01-23 Ca(OH)2, smallest to biggest . 选择排序 从小到大
void selectionsort (int *a , int l)
{
	int *p,*temp;
	p=a;
	l--;
	for (;l>0;l--)						// every time ,last one is the largest in array, so shorten the sorting array every time.
	{
		for (p=temp=a;p<(a+l);p++)		// pointer p run from the first to the last
		{
			if (  *temp < *p)			// let temp point to the largest int for now
			{
				temp =p ;
			}
		}
		swap (temp,p-1);				// put the largest int to the back
	}

}


// 2015-01-26 Ca(OH)2, smallest to biggest . 希尔排序 从小到大
void shellsort (int *a , int l)
{
	int *p;
	int i, j , n ;
	int *temp;
	printf ("start of shell \n");

	for (n=l/2,l--;n>0;n/=2)					// every n unmber in the array been picked to make up the sub array
	{
		for (j=l;j>1;j-=n)						// selection sorting for the sub array (elements are n apart)
		{

			for (temp=p=a;p<=(a+j);p+=n)		//go though the sub array to find the biggest
			{
				if (*temp<*p)
				{
					temp =p;
				}
			}
			swap (temp,p-n);
		}										// end of selection sorting
	}
}



    /////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////
  /**********					Log					**********/
 /////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

// 2015-01-21	add		void swap (int *p1,int *p2)					交换变量的值 					***	two int pointer for value 					int 要交换的变量
// 2015-01-26	update		adding a if, make no change if two pointer pointing to the same direction.

// 2015-01-22	add 	void bubblesort (int *a , int l)			冒泡排序 【从大到小】 			*** int array pointer and number of elements 	int 数组指针 int 数组元素个数


// 2015-01-22	add		int number_array_input (int *a)				输入一组整形到给定的数组		*** int array pointer for input, return unmber of element.
//																																			int 数组指针 读入 输出读入数据长度
// 2015-01-23 update(rewrite)


// 2015-01-22	add		int number_array_output (int *a, int l)		输出整形数组					*** int array pointer for output, int for number of elements.
//																																			int 数组指针 输出 int l 数组元素个数
// 2015_01_23 update(rewrite)

// 2015-01-23	add		void selectionsort (int *a , int l)			选择排序 【从小到大】			*** int array pointer and number of elements 	int 数组指针 int 数组元素个数


// 2015-01-26	add		void shellsort (int *a , int l) 			希尔排序 【从小到大】			*** int array pointer and number of elements 	int 数组指针 int 数组元素个数
