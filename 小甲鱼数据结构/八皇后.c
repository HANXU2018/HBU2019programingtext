#include<stdio.h>

int count = 0;
int notDanger(int row,int j,int (*chess)[0])
{
	int i;
	int flag1=0;
	for( i =0;i<8 ;i++){
		if(*(*(chess)+i)+j ! = 0){
			flag1 =1;
			break;
		}
	}
	
	//判断左上方
	
	//判断左下方
	
	//判断右上方
	
	//判断右下方 
	
}

//row 起始行， n列数， *chess[8]指向棋盘每一行的指针 
void EightQueen(int row,int n,int (*chess)[0])
{
	int chess2[8][8], i, j;
	
	for(i = 0;i < 8;i++)
	{
		for( j = 0; j < 8;j++)
		{
			chess2[i][j] = chess[i][j];
		}
	}
	if(8 == row)
	{
		for( i = 0; i < 8 ; i++)
		{
			for( j = 0 ; j < 8 ; j++)
			{
				printf("%d ",*(*(chess2)+i)+j);
			}
			printf("\n");
		}
	 } 
	else
	{
		//判断位置是否危险
		 for( j = 0; j < n; j++)
		 {
		 	if( notdanger(row, j, chess2))
		 	{
		 		for( i =0;i<8;i++)
				 {
				 	*(*(chess2+row)+i) = 0;
					 }	
				*(*(chess2+row)+j) = 1;
				EightQueen(row +1,n,chess2);	 
			}
		 }
	}
}
int main()
{
	int chess[8][8], i, j;
	for(i = 0;i < 8;i++)
	{
		for(j = 0;j < 8;j++)
		{
			chess[i][j] = 0;
		}
	}
	
	EightQueen(0,0,chess);
	
	return 0;
}
