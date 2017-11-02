#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

void *factorial(void *arg)
{
  int i,  fact = 1;
  int *num=(int*) arg; 
  

  for (i = 1; i <= *num; i++)
    fact = fact * i;

  printf("faktorial %d = %d\n", *num,fact);

}



int main(int argv,char *argc[])
{
int i,num[argv],*ptr;
pthread_t tid[argv];

for (i=0;i<argv-1;i++){

num[i] = atoi(argc[i+1]);
ptr=&num[i];

pthread_create(&tid[i],NULL,&factorial,(void *)ptr);
}

for (i=0;i<argv-1;i++){
pthread_join(tid[i],NULL);
}
return 0;
}
