#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
pthread_t tid[3];
char hewan[30];
char aktivitas[30];
void *statusku(void *arg)
{
 pthread_t id=pthread_self();
int status=100;
scanf("%s",hewan);
 if (pthread_equal(id,tid[0]))
{
   if (strcmp(hewan,"lohan")!=0){

	status = status-15;
	sleep(3);
		printf("lohan = %d",status);
}
	else if (strcmp(hewan,"kepiting")!=0){
        status =status-20;
	sleep(3);
	printf ("kepiting=%d",status);
	}
	}

}

else if (pthread_equal(id,tid[1]))
{
scanf("%s",aktivitas);
 if (strcmp(aktivitas,makan lohan)!=0){
	status+=10;
	} 
 else if (strcmp(aktivitas,makan kepiting)!=0{
 	status+=0;
		}
} 

int main(void)
{
    int i=0;
    int err;
    while(i<2)//looping membuat thread 2x
    {
        err=pthread_create(&(tid[0]),NULL,&statusku,NULL);//membuat thread
        if(err!=0)//cek error
        {
            printf("\n can't create thread : [%s]",strerror(err));
        }
        else
        {
            printf("\n create thread success");
        }
        i++;
    }
    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);
    return 0;
}
