#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

pthread_t tid[50];

void *count(void *arg)
{
int num = 0;
char string[1000];
char *kata =(char*) arg;

FILE *in;
in = fopen("Novel.txt","r");
 while (fscanf(in,"%s",strings)!=EOF)
{

   if (strstr(strings,kata)!=NULL){
	num++;
   }
}
printf("%s %d\n",kata,num);
fclose(in);

}

int main (int argc, char *argv[]){
int i;
for (i=1;i<argc;i++){

 pthread_create(&tid[i],NULL,&count,argv[i]);
}

for (i=1;i<argc;i++){

 pthread_join(tid[i],NULL);
}

return 0;
}
