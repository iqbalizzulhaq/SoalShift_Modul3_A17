#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

pthread_t thmenu,thtambah,thkurang1,thkurang2;

void *menu(){
int stat1=100,stat2=100,act;
printf ("1.lohan =%d",stat1);
printf ("2.kepiting =%d",stat2);
printf ("beri makan = %d",act);
}
void *kurang1(){
sleep(3);
stat1 -=15;
}
void *kurang2(){
sleep(3);
stat2 +=20;
}
void *tambah(){
if (act==1){
 	stat1 +=10;}
if (act==2){
	stat2 +=10;}
}

int main(){
while(1){
pthread_create(&(thmenu)),NULL,&menu,NULL);
pthread_create(&(thkurang1)),NULL,&kurang1,NULL);
pthread_create(&(thkurang2)),NULL,&kurang2,NULL);
pthread_create(&(thtambah)),NULL,&tambah,NULL);



}

