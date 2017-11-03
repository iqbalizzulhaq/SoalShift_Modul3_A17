#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
int poin1=0 ,poin2=0;
int board1[4][4],board2[4][4];
int kesempatan=2;

void* player1(void* arg)
{
 int masukan,i,j,lubang=16,maen=4;
 memset(board1,0,sizeof(board1[0][0])*16);
while (1){
	if(poin1<10 && poin2<10 && lubang!=0 && maen--)
	{printf("jumlah mine pemain1 = ");
	scanf("%d",&masukan); maen-=masukan;}
	if (maen<0) masukan+=lubang;
	
	while(masukan--){
	printf("masukan mine di papan : ");
	scanf("%d %d",&i,&j);
		if(board1[i][j]==0)board1[i][j]=1;
		else { printf("lubang sedang di proses\n");masukan ++;}

	}


	while(kesempatan!=1){
	if (poin1>=10 || poin2>=10)   break;
	printf("player 1 menebak!\n ");
	for(masukan=0;masukan<4;masukan++){
		scanf("%d""%d",&i,&j);
		if (board2[i][j]==0)poin1++;
		else if (board2[i][j]==1)poin2++;
		else {printf("sudah pernah terpilih\n");}
		board2[i][j]=2;

	}
}
	printf("p1%d p2%d\n",poin1,poin2);


}
int main(){

pthread_t t1,t2;
pthread_create(&t1,NULL,player1,NULL);

pthread_join(t1,NULL);
return 0;


}
