#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <string.h>

int main()
{
        key_t key = 1234;
        int pilih;
        int shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
        int  *jumlah = shmat(shmid, NULL, 0);
         

	printf("1.stock\n");
        printf("2.buy\n");
        printf("3.exit\n");
        

while(1)
{
	scanf("%d",&pilih);
if (pilih==1)
  {
        printf("MP4A1   %d\n",jumlah[0]);
        printf("PM2-V1  %d\n",jumlah[1]);
        printf("SPR-3   %d\n",jumlah[2]);
        printf("SS2-V5  %d\n",jumlah[3]);
        printf("SPG1-V3 %d\n",jumlah[4]);
        printf("MINE    %d\n",jumlah[5]);
                }
else if (pilih==2)
  {     
        char nama[10];
        int tambahan;
printf("masukan nama senjata dan jumlah yang di beli\n");
scanf("%s%d",nama,&tambahan);
if(strcmp(nama,"MP4A1")==0) jumlah[0]-=tambahan; 
if(strcmp(nama,"PM2-V1")==0) jumlah[1]-=tambahan;
if(strcmp(nama,"SPR-3")==0) jumlah[2]-=tambahan;
if(strcmp(nama,"SS2-V5")==0) jumlah[3]-=tambahan;
if(strcmp(nama,"SPG1-V3")==0) jumlah[4]-=tambahan;
if(strcmp(nama,"MINE")==0) jumlah[5]-=tambahan;

for (int i=0;i<6;i++)
{
	if (jumlah[i]<0){
		printf("stock tidak cukup\n");
		jumlah[i]+=tambahan;					}
}
                }
else if(pilih==3)
{       break;
        }


}
shmdt(jumlah);
shmctl(shmid, IPC_RMID, NULL);
}

