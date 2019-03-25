#include<stdio.h>
int main()
{   
	int m;
	printf("\nEnter number of processes: ");
	scanf("%d",&m);
	int a[m];
	int b[m];
	printf("\nEnter arival time of processes:\n");
	for(i=0;i<m;i++)
	{  printf("For processes %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter burst time for processes:\n");
	for(i=0;i<m;i++)
	{
		printf("For processes %d:",i+1);
		scanf("%d",&b[i]);
		b1[i]=b[i];	
	}
}
