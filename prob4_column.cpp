//c language
//Dev-C++ 5.9.2
//HuResTiC Hiring Challenge
//Problem 4
#include<stdio.h>
main()
{
	int i,j,r,c,column[3][3],b[10],k,end=1;
	
	printf("Enter the heights of the NINE Colums:-\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&column[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",column[i][j]);
		}
		printf("\n");
	}
	printf("Enter the position where ball is placed:-  ");
	scanf("%d %d",&r,&c);
	
	while(end!=0)//checking if no condition is satisfied
	{	
	
		b[0]=column[r-1][c];//neighbouring elements
		b[1]=column[r][c+1];
		b[2]=column[r+1][c];
		b[3]=column[r][c-1];
		end=0;// out of range(checking)
		
		printf("(%d,%d),",r,c);
		
		if((r-1)>0) //else out of bound conditions
		{
			if(b[0]<column[r][c])
			{
				r=r-1;
				end=1;
				
			}
		}
		
		if((c+1)<3)//else out of bound conditions
		{
			if(b[1]<column[r][c])
			{
				c=c+1;
				end=1;
			}
		}
		
		if((r+1)<3)//else out of bound conditions
		{
			if(b[2]<column[r][c])
			{
				r=r+1;
				end=1;
			}
		}
		
		if((c-1)>0)//else out of bound conditions
		{
			if(b[3]<column[r][c])
			{
				c=c-1;
				end=1;
			}
		}
	
	}
}
