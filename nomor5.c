#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

pthread_t tid[2];

void* count1(void *arg)
{

pthread_t=pthread_self():
if (pthread_equal(id,tid[0]))
{
FILE *in;
char *line=NULL;
size_t len=0;
ssize_t read;
int i;;
int jumlah=0;
in=fopen("/home/asus/novel.txt","r");
while(getline(&line, &len,in)!=-1){

	if (strstr(line,"fina")!=NULL) {
jumlah++;
 					}
				}
	}
else if (pthread_equal(id,tid[1]))
{
FILE *in;
char *line=NULL;
size_t len=0;
ssize_t read;
int i;char fina;
int jumlah=0;
in=fopen("/home/asus/novel.txt","r");
while(getline(&line, &len,in)!=-1){

if (strstr(line,"ifah")!=NULL) {
jumlah++;
   				}
			}

	}


}


