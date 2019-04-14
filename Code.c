//question 1
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
	printf("\n2nd ITERATION\n");
	for(i=0;i<m;i++)
	{
	if(a[i]<=tq2+a[i-1])
	{
	
		b[i]=b[i]-tq2;
		
		printf("\nFor process %d\n",i+1);
		printf("Left Burst time= %d\n",b[i]);}
		else
		{
		b[i]=b[i]-tq2;
	
		printf("For process %d\n",i+1);
		printf("Left Burst time= %d\n",b[i]);	
		}	
	}
		printf("\n3rd ITERATION\n");
	int j,temp;

	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{if(b[i]>b[j])
		{
		
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
			}
		}
	}
	int ct[4]={54,68,45,41};
	for(i=0;i<m;i++)
	{
		ta[i]=ct[i]-a[i];
		w[i]=ta[i]-b1[i];
		printf("\nCompletion time for process %d : %d \n",i+1,ct[i]);
		printf("Turn arround time for process %d : %d \n",i+1,ta[i]);
		printf("Waiting time for process %d : %d \n",i+1,w[i]);
		avgT=avgT+ta[i];
		avgW=avgW+w[i];
		
	}
	avgT=avgT/m;
	avgW=avgW/m;
	printf("\n\nAverage turn around time: %d\n",avgT);
	printf("Average waiting time: %d\n",avgW);
}
