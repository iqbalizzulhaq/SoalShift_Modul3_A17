#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
char kata[50];
char string[60];
int num=0;
pthread_t tid[50];

void *count(void *arg){
	char **kata = (char**)arg;
FILE *in,
in= fopen("/home/asus/git/novel.txt","r");
scanf("%s",kata);
while (fscanf(in,"%s",string)==1)
{
   if (strstr(string,kata)!=0{
		num++;
}

printf("%s %d\n",kata,num);
fclose(in);
}

int main (int argc, char *argv[]{
 for (kata=1;kata<argc;kata++){

 pthread_create(&tid[kata],NULL,count,(void*)argv;
 pthread_join(tid[kata],NULL);
}
return 0;
}
