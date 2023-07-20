#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int *ptr=&a;
	int *qtr=&b;
	int temp;
	temp=*ptr;
	*ptr=*qtr;
	*qtr=temp;
	printf("%d %d",*ptr,*qtr);
}