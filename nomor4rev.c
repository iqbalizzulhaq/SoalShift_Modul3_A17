#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
void *factorial(void *arg)
{
  int i, n, fact = 1;

  printf("Enter a number to calculate it's factorial\n");
  scanf("%d", &n);

  for (i = 1; i <= n; c++)
    fact = fact * i;

  printf("Factorial of %d = %d\n", n, fact);
}

