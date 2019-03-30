#include<stdio.h>
int main()
{   
	int m;
	printf("\nEnter number of processes: ");
	scanf("%d",&m);
	int a[m];+3
	int b[m],b1[m];
	int w[m];
	int ta[m];
	int tq1=3;
	int tq2=6;
	int avgT=0;
	int avgW=0;
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
		printf("\n1st ITERATION \n");
	for(i=0;i<m;i++)
	{  
	if(a[i]<=tq1+a[i-1])
	{
	
		b[i]=b[i]-tq1;
		
		printf("\nFor process %d\n",i+1);
		printf("Left Burst time=%d\n",b[i]);}
		else
		{
		b[i]=b[i]-tq1;
	
		printf("For process %d\n",i+1);
		printf("Left Burst time= %d\n",b[i]);	
		}
	}
}
