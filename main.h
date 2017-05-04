#ifdef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>


///////////zad 1

int sum_array_r(int arr[],int n);
int sum array_it(int arr[], int n, int count);


//////////zad 2

int fib_rec_count(int a, int b, int n);
int fib_rec(int n);
int fib_it_count(int a, int b, int n);
int fib_it(int n);

///////zad 3 

char* intr(char* word, int a, int n);
int rank(int a);
char* string(int a);

#endif