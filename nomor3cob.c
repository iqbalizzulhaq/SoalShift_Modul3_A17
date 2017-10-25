#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

pthread_t thmenu,thtambah,thkurang1,thkurang2;
int stat1=100,stat2=100,act;

void *menu(){
printf ("1.lohan =%d\n",stat1);
printf ("2.kepiting =%d\n",stat2);
printf ("beri makan = ");
scanf("%d",&act);
printf("-------------\n");
if (stat1<=50){printf("lohan lapar\n");}
else {printf("lohan kenyang\n");}
if (stat2<=50){printf ("kepiting lapar\n");}
else {printf("kepiting kanyang\n");}
}
void *kurang1(){
sleep(10);
stat1 -=15;
}
void *kurang2(){
sleep(20);
stat2 -=20;
}
void *tambah(){
if (act==1){
 	stat1 +=10;}
else if (act==2){
 	stat2 +=10;}
}

int main(){
while(1){

pthread_create(&(thmenu),NULL,&menu,NULL);
pthread_create(&(thkurang1),NULL,&kurang1,NULL);
pthread_create(&(thkurang2),NULL,&kurang2,NULL);
pthread_create(&(thtambah),NULL,&tambah,NULL);
if((stat1<=0||stat1>100)||(stat2<=0||stat2>100)){
printf("\n selesai\n"); 
break;
	}
pthread_join(thmenu,NULL);
}
}
