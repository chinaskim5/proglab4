#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {3,5,-2,6,7};
    int n;
    int m = 8;
    int count = 0;
    int i = 0;
    n = sizeof(arr) / sizeof(int);
    printf("\n\t");
    for (i = 0; i < n;i++)
    {
	printf("%d ",arr[i]);
    }
    //////////////////////zad 1
    
    printf("\nZad 1: Sum(rec) = %d\n", sum_array_r(arr,n));
    printf("Zad 1: Sum(it) = %d\n", sum_array_it(arr,n,count));
    
    
    //////////////////////zad 2
    
    printf("\nZad 2: %d el(rec) = %d\n",m,fib_rec(m));
    printf("%d el(it) = %d\n",m,fib_it(m));
    
    //////////////////zad 3
    printf("Zad 3: %s \n",string(123));
}