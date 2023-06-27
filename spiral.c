#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,num=1;
	printf("Enter the order of matrix : \n");
	scanf("%d",&n);

	int mat[n][n];
	int i=0,j=0;

	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i;j++)
			mat[i][j]=num++;  // 1 2 3 4 5 
		       
		for(j=i+1;j<=n-i-1;j++)
			mat[j][n-i-1]=num++;       //6
					           //7
					           //8
					           //9

		for(j=n-i-2;j>=i;j--)
			mat[n-i-1][j]=num++;

		for(j=n-2-i;j>i;j--)
			mat[j][i]=num++;
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]<10)
			{
				printf("%d  ",mat[i][j]);
			}
			else
			{
				printf("%d ",mat[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

		


