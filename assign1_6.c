#include<stdio.h>
int main()
{
	int num,table;
	printf("Enter the Number :");
	scanf("%d",&num);
	printf("Table of given number : \n");
	
	for(int i=1;i<=10;i++)
	{
		table = num * i;
		printf(" %d * %d = %d \n",num,i,table); 
	}
	
	return 0 ;

}

